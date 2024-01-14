#include <stdio.h>
int main()
{
    char n[50];
    int a;
    int p;
    int d;
    char add[50];
    char na[50];
    int ag;
    int ph;
    int da;
    char addr[50];
    printf("welcome to the phone book\n\n");
    printf("MENU\n");
    printf("press 1 to add the contact\n\n");

    int x;
    printf("Enter\n");
    scanf("%d", &x);

    if (x == 1)
    {
        int y;
        printf("enter the no of contact to be added: ");
        scanf("%d", &y);
        if (y == 1)
        {
            printf("------------------\n");
            printf("Name:\n\n");
            scanf("%s", &n);
            printf("Age:\n\n");
            scanf("%d", &a);
            printf("Phone number:\n\n");
            scanf("%d", &p);
            printf("Date of Birth:\n\n");
            scanf("%d", &d);
            printf("Address:\n\n");
            scanf("%d", &add);
            printf("------------------\n\n");
        }
        else if (y == 2)
        {
            printf("------------------\n\n");
            printf("Name:\n\n");
            scanf("%s", &n);
            printf("Age:\n\n");
            scanf("%d", &a);
            printf("Phone number:\n\n");
            scanf("%d", &p);
            printf("Date of Birth:\n\n");
            scanf("%d", &d);
            printf("Address:\n\n");
            scanf("%d", &add);
            printf("------------------\n\n");

            printf("------------------\n\n");
            printf("Name:\n\n");
            scanf("%s", &na);
            printf("Age:\n\n");
            scanf("%d", &ag);
            printf("Phone number:\n\n");
            scanf("%d", &ph);
            printf("Date Of Birth:\n\n");
            scanf("%d", &da);
            printf("Address:\n\n");
            scanf("%d", &addr);
            printf("------------------\n\n");
        }
        printf("press 2 to see the entered the contact\n");
        printf("press 3 to Exit the Phone Book");

        int z;
        printf("Enter\n");
        scanf("%d", &z);

        if(z==2)
        {
            int num;
            printf("enter the no. of contact to be viewed: ");
            scanf("%d", &num);

            if (num==1)
            {
                printf("------------------\n");
                printf("Name:\n\n");
                printf("%s", n);
                printf("Age:\n\n");
                printf("%d", a);
                printf("Phone number:\n\n");
                printf("%d", p);
                printf("Date of Birth:\n\n");
                printf("%d", d);
                printf("Address:\n\n");
                printf("%d", add);
                printf("------------------\n\n");
            }
            else if (num==2)
            {
                printf("------------------\n\n");
                printf("Name:\n\n");
                printf("%s", n);
                printf("Age:\n\n");
                printf("%d", a);
                printf("Phone number:\n\n");
                printf("%d", p);
                printf("Date of Birth:\n\n");
                printf("%d", d);
                printf("Address:\n\n");
                printf("%d", add);
                printf("------------------\n\n");

                printf("------------------\n\n");
                printf("Name:\n\n");
                printf("%s", na);
                printf("Age:\n\n");
                printf("%d", ag);
                printf("Phone number:\n\n");
                printf("%d", ph);
                printf("Date Of Birth:\n\n");
                printf("%d", da);
                printf("Address:\n\n");
                printf("%d", addr);
                printf("------------------\n\n");
            }
        }
        else if (z==3)
        {
            printf("are you sure to close the Phone Book\n");
            printf("press 1 for yess\n");
            printf("press 2 for noo\n");

            int ans;
            printf("Enter\n");
            scanf("%d", &ans);

            if(ans==1)
            {
                printf("the phone book has closed\n");
                printf("Have a Good Day\n");
            }
            else if(ans==2)
            {
                printf("the phone book has not closed\n");
                printf("you can continue\n");
            }
        }
    }
    else
    {
        printf("Invalid");
    }
    return 0;
}