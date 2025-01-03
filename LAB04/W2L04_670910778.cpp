#include <stdio.h>
#include <conio.h>

main(){
    int i, num1, num2;
    printf("Enter num1: ");
    scanf("%d", &num1);
    printf("Enter num2: ");
    scanf("%d", &num2);

    if (num1 <= num2){
        for(i = num1; i <= num2; i++){
            printf("%d ", i);
        }
    } else {
        for (i = num1; i >= num2; i--){
            printf("%d ", i);
        }
    }
    getch();
}
