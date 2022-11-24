
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#define INVALID_SOCKET -1
#define SOCKET_ERROR -1
#define closesocket(s) close(s)
typedef int SOCKET;
typedef struct sockaddr_in SOCKADDR_IN;
typedef struct sockaddr SOCKADDR;

#include <stdio.h>
#include <stdlib.h>
#define PORT 23

int client(void)
{
    SOCKET sock;
    SOCKADDR_IN sin;

    int sock_err;

    sock = socket(AF_UNIX, SOCK_STREAM,0);
    sin.sin_addr.s_addr = inet_addr("127.0.0.1");
    sin.sin_family = AF_INET;
    sin.sin_port = htons(PORT);

    if(connect(sock, (SOCKADDR*)&sin, sizeof(sin) != SOCKET_ERROR)){
        printf("Connexion à %s sur le port %d\n", inet_ntoa(sin.sin_addr), htons(sin.sin_port));
        printf("\nBonjour");
    } else{
        printf("Connexion échouer !");
    }
}

int serv(void)
{
    SOCKADDR_IN sin;
    SOCKET sock;
    socklen_t recsize = sizeof(sin);
    
    /* Socket et contexte d'adressage du client */
    SOCKADDR_IN csin;
    SOCKET csock;
    socklen_t crecsize = sizeof(csin);
    
    int sock_err;
    
    /* Création d'une socket */
    sock = socket(AF_UNIX, SOCK_STREAM, 0);
    /*Si la socket est valid*/
     if(sock != INVALID_SOCKET)
        {
            printf("La socket %d est maintenant ouverte en mode TCP/IP\n", sock);
            
            /* Configuration */
            sin.sin_addr.s_addr = htonl(INADDR_ANY);  /* Adresse IP automatique */
            sin.sin_family = AF_UNIX;                 /* Protocole familial (IP) */
            sin.sin_port = htons(PORT);               /* Listage du port */
            sock_err = bind(sock, (SOCKADDR*)&sin, recsize);
            
            /* Si la socket fonctionne */
            if(sock_err != SOCKET_ERROR)
            {
                /* Démarrage du listage (mode server) */
                sock_err = listen(sock, 5);
                printf("Listage du port %d...\n", PORT);
                
                /* Si la socket fonctionne */
                if(sock_err != SOCKET_ERROR)
                {
                    /* Attente pendant laquelle le client se connecte */
                    printf("Patientez pendant que le client se connecte sur le port %d...\n", PORT);
                    csock = accept(sock, (SOCKADDR*)&csin, &crecsize);
                    printf("Un client se connecte avec la socket %d de %s:%d\n", csock, inet_ntoa(csin.sin_addr), htons(csin.sin_port));
                }
                else{
                    perror("listen");
                }
            }
            else {
                perror("bind");
            
            /* Fermeture de la socket client et de la socket serveur */
            printf("Fermeture de la socket client\n");
            closesocket(csock);
            printf("Fermeture de la socket serveur\n");
            closesocket(sock);
            printf("Fermeture du serveur terminée\n");
            }
        }
        else{ 
            perror("socket");
        }
    
    // client();

    return EXIT_SUCCESS;
  
    return 0;
}

int main(void)
{
    client();
    serv();
    return 0;
}

int exemplte(void){
            if(sock != INVALID_SOCKET)
        {
            printf("La socket %d est maintenant ouverte en mode TCP/IP\n", sock);
            
            /* Configuration */
            sin.sin_addr.s_addr = htonl(INADDR_ANY);  /* Adresse IP automatique */
            sin.sin_family = AF_INET;                 /* Protocole familial (IP) */
            sin.sin_port = htons(PORT);               /* Listage du port */
            sock_err = bind(sock, (SOCKADDR*)&sin, recsize);
            
            /* Si la socket fonctionne */
            if(sock_err != SOCKET_ERROR)
            {
                /* Démarrage du listage (mode server) */
                sock_err = listen(sock, 5);
                printf("Listage du port %d...\n", PORT);
                
                /* Si la socket fonctionne */
                if(sock_err != SOCKET_ERROR)
                {
                    /* Attente pendant laquelle le client se connecte */
                    printf("Patientez pendant que le client se connecte sur le port %d...\n", PORT);
                    csock = accept(sock, (SOCKADDR*)&csin, &crecsize);
                    printf("Un client se connecte avec la socket %d de %s:%d\n", csock, inet_ntoa(csin.sin_addr), htons(csin.sin_port));
                }
                else
                    perror("listen");
            }
            else
                perror("bind");
            
            /* Fermeture de la socket client et de la socket serveur */
            printf("Fermeture de la socket client\n");
            closesocket(csock);
            printf("Fermeture de la socket serveur\n");
            closesocket(sock);
            printf("Fermeture du serveur terminée\n");
        }
        else
            perror("socket");
        
        #if defined (WIN32)
            WSACleanup();
        #endif
    }
}