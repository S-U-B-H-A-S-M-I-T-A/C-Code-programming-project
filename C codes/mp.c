#include <stdio.h>
int main()
{
    int n;
    int m;
    int a;
    int Exit;
    int Exi;
    printf("Welcome to Modern Periodic Table\n\n");

    printf("> enter 1 to know about an element\n\n");
    printf("> enter 2 to close the periodic table\n\n");

    printf("ENTER\n");
    scanf("%d", &n);

    if (n ==1)
    {
        printf("> press 3 to search the element by atomic number\n\n");
        printf("ENTER\n");
        scanf("%d", &m);

        if (m==3)
        {
            printf("enter the atomic number of the element to be searched: ");
            scanf("%d", &a);

            if (a == 1)
            {
                printf("name: Hydrogen\n");
                printf("symbol:H\n");
                printf("atomic number:1\n");
                printf("Electronic Configuration;1s^1\n");
                printf("Discovered By:Henry Cavendish\n");
                printf("Charge:+1\n");
            }
        }
    }
    else if (n == 2)
    {
        printf("do you want to Exit?(yes/no)");
        printf(">press 6 for yes\n");
        printf(">press 7 for No\n");

        printf("ENTER\n");
        scanf("%d", &Exit);
        if (Exit == 6)
        {
            printf("Are ypu sure u want to close the periodic Table?(yes/no)");
            printf(">press 4 for yes\n");
            printf(">press 5 for no\n");

            printf("ENTER\n");
            scanf("%d", &Exit);

            if (Exi == 4)
            {
                printf("the periodic tablr has closed");
            }
            else if (Exi == 5)
            {
                printf("the periodic table has not closed and you can continue to learn more about elements\n\n ");
                printf("enter the atomic number of the element to be searched:\n\n");
                scanf("%d", &a);

                if (a == 1)
                {
                    printf("name: Hydrogen\n");
                    printf("symbol:H\n");
                    printf("atomic number:1\n");
                    printf("Electronic Configuration;1s^1\n");
                    printf("Discovered By:Henry Cavendish");
                    printf("Charge:+1\n");
                }
            }
        }
        else if (Exit == 7)
        {
            printf("periodic table  has not closed and you can continue to learn more elements\n\n");
            printf("enter the atomic number of the element to be searched:\n\n");
            scanf("%d", &a);

            if (a == 1)
            {
                printf("name: Hydrogen\n");
                printf("symbol:H\n");
                printf("atomic number:1\n");
                printf("Electronic Configuration;1s^1\n");
                printf("Discovered By:Henry Cavendish");
                printf("Charge:+1\n");
            }
        }
    }
}