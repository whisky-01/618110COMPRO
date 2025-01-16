#include <stdio.h>

float Req(char option, int R1, int R2, int R3)
{
    float req = 0.0;

    if (option == 's')
    {
        req = R1 + R2 + R3;
    }
    else if (option == 'p')
    {
        req = 1 / ((1.0 / R1) + (1.0 / R2) + (1.0 / R3));
    }
    return req;
}

int main()
{
    char option;
    int R1, R2, R3;
    float req;

    printf("Enter Option (s or p): ");
    scanf("%c", &option);

    printf("Enter R1 : ");
    scanf("%d", &R1);
    printf("Enter R2 : ");
    scanf("%d", &R2);
    printf("Enter R3 : ");
    scanf("%d", &R3);

    req = Req(option, R1, R2, R3);
    printf("Req = %.2f Ohm\n", req);
}
