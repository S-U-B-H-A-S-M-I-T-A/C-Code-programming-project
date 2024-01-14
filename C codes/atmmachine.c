#include <stdio.h>
int main()
{
    char card, cad;
    int n, p, a, b, diff, i;
    printf("welcome to the ATM\n\n");
    printf("please Insert your card\n\n");
    scanf("%c", &card);
    if (card == 'k')
    {
        printf("hello ken keneki\n\n");
        printf(">press 1 to withdrawl the money from your account\n\n ");
        printf(">press 2 to check the balance\n\n");
        b = 50000;
        scanf("%d", &n);
        if (n == 1)
        {
            printf("please enter your 4 digit pin:\n");
            scanf("%d", &p);

            if (p == 1234)
            {
                printf("enter the amount to be withdrawl:\n");
                scanf("%d", &a);
                if (a > b)
                {
                    printf("insufficient");
                }
                else
                {
                    printf("collect the money\n\n");
                    diff = b - a;
                    printf("now your bank balance is %d", diff);
                }
            }
            else
            {
                printf("incorrect pin\n\n");
                printf("please try again\n\n");
                scanf("%d", &p);
                if (p == 1234)
                {
                    printf("enter the amount to be withdrawl:\n");
                    scanf("%d", &a);
                    if (a > b)
                    {
                        printf("insufficient");
                    }
                    else
                    {
                        printf("collect the money\n\n");
                        diff = b - a;
                        printf("now your bank balance is %d", diff);
                    }
                }
                else
                {
                    printf("your request has been blocked\n");
                    printf("so please try again");
                }
            }
        }
        else if (n == 2)
        {
            printf("please enter your 4 digit pin:\n");
            scanf("%d", &p);
            if (p != 1234)
            {
                printf("please try again\n\n");
                scanf("%d", &p);
                if (p != 1234)
                {

                    printf("your request has been blocked\n");
                    printf("so,please try again");
                }
                else
                {
                    printf("your bank balance is %d", b);
                }
            }
            else
            {
                printf("your bank balance is %d", b);
            }
        }
    }
    else if (card == 's')
    {
        printf("hello sasuke uchiha\n\n");
        printf(">press 1 to withdrawl the money from your account\n\n ");
        printf(">press 2 to vheck the balance\n\n");
        b = 100000;
        scanf("%d", &n);
        if (n == 1)
        {
            printf("please enter your 4 digit pin:\n");
            scanf("%d", &p);
            if (p == 5678)
            {
                printf("enter the amount to be withdrawl:\n");
                scanf("%d", &a);
                if (a > b)
                {
                    printf("insufficient");
                }
                else
                {
                    printf("collect the money\n\n");
                    diff = b - a;
                    printf("now your bank balance is %d", diff);
                }
            }
            else
            {
                printf("incorrect pin\n\n");
                printf("please try again\n\n");
                scanf("%d", &p);
                if (p == 5678)
                {
                    printf("enter the amount to be withdrawl:\n");
                    scanf("%d", &a);
                    if (a > b)
                    {
                        printf("insufficient");
                    }
                    else
                    {
                        printf("collect the money\n\n");
                        diff = b - a;
                        printf("now your bank balance is %d", diff);
                    }
                }
                else
                {
                    printf("your request has been blocked\n");
                    printf("so please try again");
                }
            }
        }
        else if (n == 2)
        {
            printf("please enter your 4 digit pin:\n");
            scanf("%d", &p);
            if (p != 5678)
            {

                printf("please try again\n\n");
                scanf("%d", &p);
                if (p != 5678)
                {
                    printf("your request has been blocked\n");
                    printf("so please try again");
                }

                else
                {
                    printf("your bank balance is %d", b);
                }
            }
            else
            {
                printf("your bank balance is %d", b);
            }
        }
    }

    else if (card == 'i')
    {
        printf("hello itachi uchiha\n\n");
        printf(">press 1 to withdrawl the money from your account\n\n ");
        printf(">press 2 to check the balance\n\n");
        b = 60000;
        scanf("%d", &n);
        if (n == 1)
        {
            printf("please enter your 4 digit pin:\n");
            scanf("%d", &p);
            if (p == 9123)
            {
                printf("enter the amount to be withdrawl:\n");
                scanf("%d", &a);
                if (a > b)
                {
                    printf("insufficient");
                }
                else
                {
                    printf("collect the money\n\n");
                    diff = b - a;
                    printf("now, your bank balance is %d", diff);
                }
            }
            else
            {
                printf("incorrect pin\n\n");
                printf("please try again\n\n");
                scanf("%d", &p);
                if (p == 9123)
                {
                    printf("enter the amount to be withdrawl:\n");
                    scanf("%d", &a);
                    if (a > b)
                    {
                        printf("insufficient");
                    }
                    else
                    {
                        printf("collect the money\n\n");
                        diff = b - a;
                        printf("now your bank balance is %d", diff);
                    }
                }
                else
                {
                    printf("your request has been blocked\n");
                    printf("so please try again");
                }
            }
        }
        else if (n == 2)
        {
            printf("please enter your 4 digit pin:\n");
            scanf("%d", &p);
            if (p != 9123)
            {

                printf("please try again\n\n");
                scanf("%d", &p);
                if (p != 9123)
                {
                    printf("your request has been blocked\n");
                    printf("so please try again");
                }

                else
                {
                    printf("your bank balance is %d", b);
                }
            }

            else
            {
                printf("your bank balance is %d", b);
            }
        }
    }

    else if (card == 'l')
    {
        printf("hello light yagami\n\n");
        printf(">press 1 to withdrawl the money from your account\n\n ");
        printf(">press 2 to check the balance\n\n");
        b = 40000;
        scanf("%d", &n);
        if (n == 1)
        {
            printf("please enter your 4 digit pin:\n");
            scanf("%d", &p);
            if (p == 8123)
            {
                printf("enter the amount to be withdrawl:\n");
                scanf("%d", &a);
                if (a > b)
                {
                    printf("insufficient");
                }
                else
                {
                    printf("collect the money\n\n");
                    diff = b - a;
                    printf("now your bank balance is %d", diff);
                }
            }
            else
            {
                printf("incorrect pin\n\n");
                printf("please try again\n\n");
                scanf("%d", &p);
                if (p == 8123)
                {
                    printf("enter the amount to be withdrawl:\n");
                    scanf("%d", &a);
                    if (a > b)
                    {
                        printf("insufficient");
                    }
                    else
                    {
                        printf("collect the money\n\n");
                        diff = b - a;
                        printf("now your bank balance is %d", diff);
                    }
                }
                else
                {
                    printf("your request has been blocked\n");
                    printf("so please try again");
                }
            }
        }
        else if (n == 2)
        {
            printf("please enter your 4 digit pin:\n");
            scanf("%d", &p);
            if (p != 8123)
            {

                printf("please try again\n\n");
                scanf("%d", &p);
                if (p != 8123)
                {
                    printf("your request has been blocked\n");
                    printf("so please try again");
                }
            }
            else
            {
                printf("your bank balance is %d", b);
            }
        }
        else
        {
            printf("your bank balance is %d", b);
        }
    }
}