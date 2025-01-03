#include <stdio.h>
#include <conio.h>

main()
{
    int Password = 6453;
    int i, input;

    for (i = 1; i <= 3; i++)
    {
        printf("Enter Password #%d : ", i);
        scanf("%d", &input);

        if (input == Password)
        {
            printf("*** Open ***\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }

    if (i == 3 && input != Password)
    {
        printf("*** Bye Bye***\n");
    }

    getch();
}
