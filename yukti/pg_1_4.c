#include <stdio.h>

int main()
{
    printf("Navedul Hasan Ahmad   590011772\n");
    char str[100];

    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);  

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {  
            str[i] = str[i] + 32;  
        }
    }

    printf("Lowercase string: %s\n", str);

    return 0;
}
