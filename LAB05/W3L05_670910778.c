#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14

Cylinder()
{
    float volume, radius, height;
    printf("\n\n----- Cylinder -----\n");
    printf("Enter radius: ");
    scanf("%f", &radius);
    printf("Enter height: ");
    scanf("%f", &height);
    volume = PI * pow(radius, 2) * height;
    printf("Volume = %.3f\n", volume);
    printf("--------------------\n");
}

Sphere()
{
    float volume, radius, height;
    printf("\n\n----- Sphere -----\n");
    printf("Enter radius: ");
    scanf("%f", &radius);
    volume = (4 / 3.0) * PI * pow(radius, 3);
    printf("Volume = %.3f\n", volume);
    printf("--------------------\n");
}

Cone()
{
    float volume, radius, height;
    printf("\n\n----- Cone -----\n");
    printf("Enter radius: ");
    scanf("%f", &radius);
    printf("Enter height: ");
    scanf("%f", &height);
    volume = (1 / 3.0) * PI * pow(radius, 2) * height;
    printf("Volume = %.3f\n", volume);
    printf("--------------------\n");
}

int menu()
{
    system("cls");
    int m;
    printf("*******************\n");
    printf(" Main Menu \n");
    printf("*******************\n");
    printf(" a. Cylinder \n");
    printf(" b. Sphere \n");
    printf(" b. Cone \n");
    printf(" q. Exit \n");
    printf("*******************\n");
    printf("Enter Menu : ");
    scanf("%c", &m);
    return m;
}

main()
{
    char a, b, c, q;
    int choice;
    choice = menu();
    switch (choice)
    {
    case 'a':
        Cylinder();
        break;
    case 'b':
        Sphere();
        break;
    case 'c':
        Cone();
        break;
    case 'q':
        goto exit;
    exit:
        printf("\n\n**** Thank You ****\n");
    }
}