#include <stdio.h>
#include <conio.h>

main() {
    int num, i, j;
    printf("Enter num: ");
    scanf("%d", &num);

    for(i=0; i< num; i++) {
        for(j=0; j< i; j++){
            printf(" ");
        }
        printf("#\n");
    }
    getch();
}