#include<stdio.h>
int main()
{
    char str[50];
    int i=0;

    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0')
        i++;

    printf("length=%d", i-1);
    return 0;
}



/*#include <stdio.h>
int main() {
    char str[50];
    int i=0;

    scanf("%s", str);

    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
        i++;
    }

    printf("%s", str);
    return 0;
}*/
