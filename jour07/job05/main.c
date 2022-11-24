 #include <stdio.h> 
#include <string.h>

int my_nboccur(char *str,char c)
{
    int i,count=0;
     for(i=0;str[i];i++)  
    {
    	if(str[i]==c)
    	{
          count++;
		}
 	}
 	return count;
     
 	 
    
 	
	  
 }
int main()
{

    char str[1000],c;
	int count=0;  
  
    printf("Str : ");
    gets(str);
    printf("c a chercher: ");
    c=getchar();
    count=my_nboccur(s,c);
    printf("character '%c' occurs %d times \n ",c,count);

	return 0;
 
     
     
}