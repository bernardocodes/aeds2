#include <stdio.h>
#include <string.h>

int main() {

    // strlen(str) - tam sem o \0
    char str1[] = "Hello";
    printf("Tamanho de str1: %lu\n", strlen(str1));

    // strcmp(s1,s2) - Compara duas strings
    /*  
        < 0 se s1 < s2
        0 se s1 == s2
        > 0 se s1 > s2
    */ 
    char str2[] = "World";
    if (strcmp(str1, str2) == 0) {
        printf("As strings são iguais.\n");
    } else {
        printf("As strings são diferentes.\n");
    }

    // strcpy(destino,fonte) - Copia uma string para outra
    char str3[20];  // Deve ter espaço suficiente
    strcpy(str3, str1);
    printf("str3 após strcpy: %s\n", str3);

//-----------------

    // strcat() - Concatena duas strings
    strcat(str3, str2);
    printf("str3 após strcat: %s\n", str3);

    return 0;
}
