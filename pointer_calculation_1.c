#include<stdio.h>
int main()
{
    char *chr = "Bangladesh";
    printf("%c, %c, %c, %c\n", *chr, *(chr + 1), *(chr + 2), *(chr + 3));

    printf("%c, %c, %c, %c\n", *chr, *chr + 1, *chr + 2, *chr + 3);

    char *alphabet = "A";
    for(int i = 0; i < 26; i++){
        printf("%c\n", *alphabet + i);
    }
}
