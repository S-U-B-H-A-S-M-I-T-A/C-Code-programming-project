#include <stdio.h>
int main()
{
    int i;
    int ans1, ans2, ans3, ans4, ans5;
    int point1, point2, point3, point4, point5, point6, point7, point8, point9, point10;
    int point01, point02, point03, point04, point05, point06, point07, point08, point09, point010;
    int total1, total2, total3;

    printf("welcome to the game\n\n");

    printf(">press 7 to start the game\n");
    printf(">press 0 to quit the game\n");
    scanf("%d", &i);
    if (i == 7)
    {
        printf("the game has started\n\n");
    }
    else if (i == 0)
    {
        printf("the game has not started\n\n");
    }
    else
    {
        printf("Invalid\n\n");
    }
    if (i == 7)
    {
        printf("1)which one is the first search engine in internet?\n\n");
        printf("1)Google\n");
        printf("1)Archie\n");
        printf("3)Wais\n");
        printf("4)Altevista\n");

        printf("enter your answer:");
        scanf("%d", &ans1);
        if (ans1 == 1)
        {
            printf("Correct answer\n");
            point1 = 5;
            printf("You have scored %d point\n", point1);
        }
        else
        {
            printf("wrong answer\n");
            point01 = 0;
            printf("you have scored %d point\n", point01);
        }
        printf("2)scientific name of computer?\n\n");
        printf("1)Sillico sapiens\n");
        printf("2)homosapiens\n");
        printf("3)citrulls\n");
        printf("4)WWW\n");

        printf("enter your answer:");
        scanf("%d", &ans2);
        if (ans2 == 1)

        {
            printf("Correct answer\n");
            point2 = 5;
            printf("You have scored %d point\n", point2);
        }
        else
        {
            printf("wrong answer\n");
            point02 = 0;
            printf("you have scored %d point\n", point02);
        }
        printf("3)First computer virus is known as?\n\n");
        printf("1)Rabbit\n");
        printf("2)creeper Virus\n");
        printf("3)Eic Cloner\n");
        printf("4)SCA Virus\n");

        printf("enter your answer:");
        scanf("%d", &ans3);
        if (ans3 == 2)
        {
            printf("Correct answer\n");
            point3 = 5;
            printf("You have scored %d point\n", point3);
        }
        else
        {
            printf("wrong answer\n");
            point03 = 0;
            printf("you have scored %d point\n", point03);
        }
        printf("4)the symbol used in an assembly Language are?\n\n");
        printf("1)codes\n");
        printf("2)Mnemonics\n");
        printf("3)assembler\n");
        printf("4)all of the above\n");

        printf("enter your answer:");
        scanf("%d", &ans4);
        if (ans4 == 2)
        {
            printf("Correct answer\n");
            point4 = 5;
            printf("You have scored %d point\n", point4);
        }
        else
        {
            printf("wrong answer\n");
            point04 = 0;
            printf("you have scored %d point\n", point04);
        }
        printf("3)Which language is better for writing structured code?\n\n");
        printf("1)Pl1\n");
        printf("2)FORTAN\n");
        printf("3)Basic\n");
        printf("4)PASCAL\n");

        printf("enter your answer:");
        scanf("%d", &ans5);
        if (ans5 == 4)
        {
            printf("Correct answer\n");
            point5 = 5;
            printf("You have scored %d point\n", point5);
        }
        else
        {
            printf("wrong answer\n");
            point05 = 0;
            printf("you have scored %d point\n", point05);
        }
        }
    return 0;
}
