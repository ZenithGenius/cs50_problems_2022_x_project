#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <string.h>
#include <math.h>

void self_solving();
void random_game();
void linear_quadratic();

int a[20][20];
void dice_game() /*One dice game*/
{
    system("cls");
    system("color 02");
    int b = 0, c, d;
    char n;
    srand(time(0));
    for (d = 0; d <= 75; d++)
    {
        printf("*");
    }
    printf("\n\n\t\tHow many times do you wish to play?");
    scanf("%d", &c);
    for (d = 0; d <= 75; d++)
    {
        printf("*");
    }
    while (b < c)
    {
        c--;
        getc(stdin);
        printf("\n\t\tPlayer 1: Press enter to roll your dice!\n");
        for (d = 0; d <= 75; d++)
        {
            printf("-");
        }
        getc(stdin);
        int p1 = (rand() % 6) + 1;
        printf("\n\t\tPlayer 2: Press enter to roll your dice!\n");
        for (d = 0; d <= 75; d++)
        {
            printf("-");
        }
        getc(stdin);
        int p2 = (rand() % 6) + 1;
        for (d = 0; d <= 75; d++)
        {
            printf("-");
        }
        printf("\n\n\t\tPlayer 1 rolled a: %d\n\n\t\tPlayer 2 rolled a: %d\n\n", p1, p2);
        if (p1 == p2)
        {
            for (d = 0; d <= 75; d++)
            {
                printf("*");
            }
            printf("\n\n\t\tYou tied!!!\n\n");
            for (d = 0; d <= 75; d++)
            {
                printf("-");
            }
        }
        else if (p1 > p2)
        {
            for (d = 0; d <= 75; d++)
            {
                printf("*");
            }
            printf("\n\n\t\t* * * Player 1 has won! * * *\n\n");
        }
        else
        {
            for (d = 0; d <= 75; d++)
            {
                printf("*");
            }
            printf("\n\n\t\t* * * Player 2 has won! * * *\n\n");
        }
        for (d = 0; d <= 75; d++)
        {
            printf("*");
        }
    }
}
int main()
{
    int j, jason;
    char benny[10];
    system("cls");
    system("color f0");
    printf("\n\n\t\t\t* * * \"Benny Jason's Sofware : Degenietool$\" * * *\n");
    for (j = 0; j <= 75; j++)
    {
        printf("-");
    }
    printf("\n\n\t\t*1 - Solve A Linear Or A Quadratic\n\n\t\tEquation\n\n\t\t*2 - Play A Dice Game\n\n\t\t*3 - Learn By Solving Exercises On \n\n\t\tQuadratic Equations\n\n\t\t*4 - Play Guess Number Game\n");
    for (j = 0; j <= 75; j++)
    {
        printf("-");
    }
ENTER:
    printf("\n\n\t\tEnter your preference:\t");
    scanf("%d", &jason);
    switch (jason)
    {
    case 1:
        linear_quadratic();
        for (j = 0; j <= 75; j++)
            printf("-");
        break;
    case 2:
        dice_game();
        for (j = 0; j <= 75; j++)
            printf("-");
        break;
    case 3:
        self_solving();
        for (j = 0; j <= 75; j++)
            printf("*");
        break;
    case 4:
        random_game();
        for (j = 0; j <= 75; j++)
            printf("-");
        break;
    default:
    {
        goto ENTER;
    }
    }
    printf("\n\n\t\tEnter your name please:\t");
    scanf("%s", benny);
    for (j = 0; j <= 75; j++)
    {
        printf("*");
    }
    printf("\n\n\t\tBenny : * * * Thanks %s For Using This Code * * * \n\n", benny);
    for (j = 0; j <= 75; j++)
    {
        printf("*");
    }
    return 0;
}
void self_solving()
{
    system("cls");
    system("color 09");
    int ch, l, g, h = 0, j;
    srand(time(0));
    for (l = 0; l <= 75; l++)
    {
        printf("*");
    }
    printf("\n\n\t\t* * * * * *WELCOME TO BENNY'S* * * * *\n");
    printf("\n\n\t\t *  *BOOK ON LEARNING HOW TO SOLVE*  *\n");
    printf("\n\n\t\t ** * * *LINEAR AND QUADRATIC* * * **\n");
    printf("\n\n\t\t *** * * * * * EQUATIONS* * * * * ***\n");
    for (l = 0; l <= 75; l++)
    {
        printf("*");
    }
    printf("\n\n\t\t1 - Learn How To Solve Linear Equation\n\n\t\t2 - Learn How To Solve Quadratic Equation\n");
    for (l = 0; l <= 75; l++)
    {
        printf("*");
    }
    printf("\n\n\t\tChoose Which You Want To Learn:");
    scanf("%d", &ch);
    for (l = 0; l <= 75; l++)
    {
        printf("*");
    }
    if (ch == 1)
    {
        system("cls");
        system("color 09");
        printf("\n\n\t\tSo you wish to solve equations of the form ax+b=c\n");
        for (l = 0; l <= 75; l++)
        {
            printf("*");
        }
        int x, y, z;
        float a1, b, c;
        a1 = (rand() % 10) + 1;
        b = (rand() % 10) + 1;
        printf("\n\n\t\tHow many exercises do you wish to do today?");
        scanf("%d", &g);
        for (l = 0; l <= 75; l++)
        {
            printf("*");
        }
        while (h < g)
        {
            g--;
            printf("\n\n\t\tGiven an equation where a=%.2f and b=%.2f.\n\n\t\tFind the value of x in this equation.\n", a1, b);
            for (l = 0; l <= 75; l++)
            {
                printf("*");
            }
            c = (-b) / a1;
            printf("\n\n\t\tSolve and see whether you answer x is:%.2f\n", c);
            for (l = 0; l <= 75; l++)
            {
                printf("*");
            }
            getc(stdin);
            getc(stdin);
        }
    }
    else if (ch == 2)
    {
        system("cls");
        system("color 09");
        float a1, b, c, real, img, x1, x2, d;
        printf("\n\n\t\tSo you wish to solve equations of the form ax^2+bx+c=0\n");
        for (l = 0; l <= 75; l++)
        {
            printf("*");
        }
        a1 = (rand() % 10) + 1;
        b = (rand() % 10) + 1;
        c = (rand() % 10) + 1;
        printf("\n\n\t\tHow many exercises do you wish to do today?");
        scanf("%d", &g);
        for (l = 0; l <= 75; l++)
        {
            printf("*");
        }
        while (h < g)
        {
            g--;
            printf("\n\n\t\tGiven an equation where a=%.0f, b=%.0f, and c=%.0f.\n\n\t\tFind the value of x in this equation.\n", a1, b, c);
            for (l = 0; l <= 75; l++)
            {
                printf("*");
            }
            d = b * b - 4 * a1 * c;
            printf("\n\n\t\tSolve and see whether the discriminant is %.0f\n", d);
            if (d < 0)
            {
                real = (-b) / (2 * a1);
                img = sqrt(-d) / (2 * a1);
                printf("\n\n\t\tCOMPLEX SOLUTION: %.0f+%.0fi and %.0f-%.0fi\n", real, img, real, img);
                for (l = 0; l <= 75; l++)
                {
                    printf("*");
                }
            }
            else if (d == 0)
            {
                x1 = x2 = ((-b) / (2 * a1));
                printf("\n\n\t\tONE SOLUTION:%.1f\n", x1);
                for (l = 0; l <= 75; l++)
                {
                    printf("*");
                }
            }
            for (j = 0; j <= 75; j++)
            {
                printf("*");
            }
            {
                x1 = ((-b) + (sqrt(d))) / (2 * a1);
                x2 = ((-b) - (sqrt(d))) / (2 * a1);
                printf("\n\n\t\tDOUBLE SOLUTION: %.1f and %.1f\n", x1, x2);
                for (l = 0; l <= 75; l++)
                {
                    printf("*");
                }
                getc(stdin);
                getc(stdin);
            }
        }
    }
}

void random_game()
{
    system("cls");
    system("color e4");
    int g, r, t, a1, b, c, d = 0, h;
    srand(time(0));
    for (b = 0; b <= 75; b++)
    {
        printf("*");
    }
    printf("\n\n\t\t***WELCOME TO THE RANDOM NUMBER  GUESS GAME***\n");
    printf("\n\n\t\t**GUESS THE NUMBER WHICH IS BETWEEN 0 AND 100**\n");
    for (b = 0; b <= 75; b++)
    {
        printf("*");
    }
    printf("\n\n\t\tHow many times do you wish to play?");
    scanf("%d", &b);
    for (b = 0; b <= 75; b++)
    {
        printf("*");
    }
    while (d < b)
    {
        b--;
        r = rand() % 101;
        printf("\n\n\t\tWhat level of difficulty do you want?\n\n\t\t1 - EASY = 10 tries\n\n\t\t2 - MEDIUM = 7 tries\n\n\t\t3 - DIFFICULT = 5 tries\t\t");
        scanf("%d", &a1);
        for (b = 0; b <= 75; b++)
        {
            printf("*");
        }
        if (a1 == 1)
        {
            t = 10;
        }
        else if (a1 == 2)
        {
            t = 7;
        }
        else if (a1 == 3)
        {
            t = 5;
        }
        printf("\n\n\t\tYou have a total number of %d tries\n", t);
        while ((t != 0) > 0)
        {
            t--;
            for (b = 0; b <= 75; b++)
            {
                printf("-");
            }
            printf("\n\n\t\tEnter your guess number:");
            scanf("%d", &g);
            if (g == r)
            {
                if (a1 == 1)
                {
                    h = 10;
                    for (b = 0; b <= 75; b++)
                    {
                        printf("-");
                    }
                    printf("\n\n\t\t***BRAVO YOU WIN IN %d TRIES***\n", h - t);
                    break;
                }
                else if (a1 == 2)
                {
                    h = 7;
                    for (b = 0; b <= 75; b++)
                    {
                        printf("-");
                    }
                    printf("\n\n\t\t***BRAVO YOU WIN IN %d TRIES***\n", h - t);
                    break;
                }
                else if (a1 == 3)
                {
                    h = 5;
                    for (b = 0; b <= 75; b++)
                    {
                        printf("-");
                    }
                    printf("\n\n\t\t***BRAVO YOU WIN IN %d TRIES***\n", h - t);
                    break;
                }
            }
            else if (r > g)
            {
                printf("\n\n\t\tYour number is small\n");
                for (b = 0; b <= 75; b++)
                {
                    printf("-");
                }
                printf("\n\n\t\tYour chances left are %d\n", t);
            }
            else
            {
                printf("\n\n\t\tYour number is high\n");
                for (b = 0; b <= 75; b++)
                {
                    printf("-");
                }
                printf("\n\n\t\tYour chances left are %d\n", t);
            }
        }
        while (t <= 0)
        {
            for (b = 0; b <= 75; b++)
            {
                printf("-");
            }
            printf("\n\n\t\tSorry you have lost the game\n");
            break;
        }
        for (b = 0; b <= 75; b++)
        {
            printf("*");
        }
        printf("\n\n\t\tThe number to be guessed was %d\n", r);
        for (b = 0; b <= 75; b++)
        {
            printf("*");
        }
    }
}

void linear_quadratic()
{
    system("cls");
    system("color 0e");
    int ch, l;
    for (l = 0; l <= 75; l++)
    {
        printf("*");
    }
    printf("\n\n\t\t* * *WELCOME TO BENNY'S* * *\n\t\t");
    for (l = 0; l <= 28; l++)
    {
        printf("-");
    }
    printf("\n\n\t\t*  *LINEAR AND QUADRATIC*  *\n\t\t");
    for (l = 0; l <= 28; l++)
    {
        printf("-");
    }
    printf("\n\n\t\t* ** *EQUATION SOLVER* * ** *\n");
    for (l = 0; l <= 75; l++)
    {
        printf("*");
    }
    printf("\n\n\t\t1 - Linear Equation\n\n\t\t2 - Quadratic Equation\n");
    for (l = 0; l <= 75; l++)
    {
        printf("*");
    }
    printf("\n\n\t\t\tEnter your choice:");
    scanf("%d", &ch);
    if (ch == 1)
    {
        system("cls");
        system("color 0e");
        printf("\n\n\t\tYour equation is of the form ax+b=c \n");
        int x, y=0, z;
        float a1, b, c;
        printf("\n\n\t\tHow many equations do you wish to solve?");
        scanf("%d", &x);
        while (y < x)
        {
            x--;
            printf("\n\n\t\tEnter element a and b respectively:\n");
            scanf("%f%f", &a1, &b);
            printf("\n\n\t\tSo your equation is %.2fx+%.2f=0", a1, b);
            c = (-b) / a1;
            printf("\n\n\t\tAnswer x is: %.2f\n", c);
        }
    }
    if (ch == 2)
    {
        system("cls");
        system("color 0e");
        float a1, b, c, real, img, x1, x2, d;
        printf("\n\n\t\tEnter the coefficients a, b and c of the equation:\n");
        scanf("%f%f%f", &a1, &b, &c);
        printf("\n\n\t\tYour equation is %.1fx^2+%.1fx+%.1f\n", a1, b, c);
        d = b * b - 4 * a1 * c;
        printf("\n\n\t\tThe discriminant is %.1f\n", d);
        if (d < 0)
        {
            real = (-b) / (2 * a1);
            img = sqrt(-d) / (2 * a1);
            printf("\n\n\t\tCOMPLEX SOLUTION: %.0f+%.0fi and %.0f-%.0fi\n", real, img, real, img);
        }
        else if (d == 0)
        {
            system("cls");
            system("color 0e");
            x1 = x2 = ((-b) / (2 * a1));
            printf("\n\n\t\tONE SOLUTION:%.1f\n", x1);
        }
        else
        {
            system("cls");
            system("color 0e");
            x1 = ((-b) + (sqrt(d))) / (2 * a1);
            x2 = ((-b) - (sqrt(d))) / (2 * a1);
            printf("\n\n\t\tDOUBLE SOLUTION: %.1f and %.1f\n", x1, x2);
        }
    }
    int k;
    printf("\n\n\t\t-----------------------\n");
    printf("\n\n\t\t  -Thanks for using-\n");
    printf("\n\n\t\t-my program, hope you-\n");
    printf("\n\n\t\t-will use it back soon-\n");
    printf("\n\n\t\t-----------------------\n");
}
