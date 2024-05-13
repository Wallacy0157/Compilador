#include <stdio.h>

int main() 
{
    char texto[10];

    printf("Informe o texto: ");
    fgets(texto, 10, stdin);

    if(texto[0] == '<'  texto[0] == '<' && texto[1] == '='  texto[1] == '>') 
        printf("Texto aceito!\n");
    else if(texto[0] == '>'  texto[0] == '>'&& texto[1] == '='  texto[0] == ':' && texto[1] == '=') 
            printf("Texto aceito!\n");
        else 
            printf("\nTexto NAO aceito!\n");


    return 0;
}