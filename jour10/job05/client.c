#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define INVALID_SOCKET -1
#define SOCKET_ERROR -1
#define closesocket(s) close(s)

typedef int SOCKET;
typedef struct sockaddr_in SOCKADDR_IN;
typedef struct sockaddr SOCKADDR;
typedef struct in_addr IN_ADDR;

#define PORT 23

int client(port)
{
    SOCKET sock = socket(AF_INET, SOCK_STREAM, 0);//Création de la socket
    SOCKADDR_IN sin = { 0 }; // Initialise la structure

    sin.sin_addr.s_addr = inet_addr("127.0.0.1");
    sin.sin_family = AF_INET;
    // sin.sin_port = htons(PORT);

    if(connect(sock, (SOCKADDR*)&sin, sizeof(sin) != SOCKET_ERROR)){
        printf("Connexion à %s sur le port %d\n", inet_ntoa(sin.sin_addr), htons(port));
        printf("Bonjour \n");
    } else{
        printf("Connexion échouer !");
    }


}

int main(void)
{
    client();
    // serv();
    return 0;
}