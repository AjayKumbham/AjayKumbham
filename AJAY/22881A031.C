#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int c, p;
    int i;
    int j;
    int s[10] = {};
    printf("\n\n   ---------------------------------------------\n");
    printf("    Welcome to Airline Seat Reservations System ");
    printf("\n   ---------------------------------------------\n\n");
    for (j = 0; j < 10; j++)
    {
        printf("  *********************************\n");
        printf("   Class\n\n   [1] Business Class\n   [2] Economic class\n   [3] Exit\n\n");
        printf("  *********************************\n");
        printf("   Choose: ");
        scanf("%i", &c);
        // system("cls");
        switch (c)
        {
        case 1:
            printf("  ◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇\n");
            printf("   Business class\n\n");
            printf("   Seats available\n     |1|2|3|4|5|\n\n");
            printf("  ◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇\n");
            do
            {
                printf("   Pick a seat: ");
                scanf("%i", &p);
                s[j] = p;
                // system("cls");
                for (i = 0; i < j; i++)
                {
                    if (s[j] == s[i])
                    {
                        printf("\n\n   Seat taken.\n\n");
                        break;
                    }
                }
            } while (i != j);
            if (s[j] <= 5)
            {
                printf("   ♤♤♤♤♤♤♤♤♤♤♤♤♤♤♤♤♤♤\n");
                printf("\n");
                printf("   Class: Business class\n");
                printf("   Seat no : %i\n", s[j]);
                printf("   Reserved successfully!");
                printf("\n\n");
            }
            else
                printf("\nWrong number!  No seat for you!\n\n");
            break;
        case 2:
            printf("   ◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇\n");
            printf("   Economical class\n\n");
            printf("   Seats available\n    |6|7|8|9|10|\n\n");
            printf("   ◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇\n");
            do
            {
                printf("   Pick a seat: ");
                scanf("%i", &p);
                s[j] = p;
                // system("cls");
                for (i = 0; i < j; i++)
                {
                    if (s[j] == s[i])
                    {
                        printf("\n\n   Seat taken.\n\n");
                        break;
                    }
                }
            } while (i != j);
            if (s[j] >= 6 && s[j] <= 10)
            {
                printf("   ♤♤♤♤♤♤♤♤♤♤♤♤♤♤♤♤♤♤♤\n");
                printf("\n");
                printf("   Class: Economical class\n");
                printf("   Seat no : %i\n", s[j]);
                printf("   Reserved successfully!");
                printf("\n\n");
            }
            else
                printf("\nWrong number!  No seat for you!\n\n");
            break;
        case 3:
            exit(0);
            break;
        default:
            printf("\n   Please select the valid class..\n");
            break;
        }
    }
    return 0;
}
