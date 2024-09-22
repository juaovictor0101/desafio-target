#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    int cont=0;
    int i;
    
    
    printf("Informe uma palavra: ");
    scanf("%s",str);
    int length = strlen(str);
    
    for (i=0; i<length;i++){
        if (str[i] =='A'||str[i]=='a'){
            cont++;
        }
    }
    
    if (cont>0){
        printf("a letra A aparece na palavra pelo menos uma vez!\n");
    }
    printf("Há um total de %d letras A na palavra %s", cont,str);
    return 0;
}