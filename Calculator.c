#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
float mul(int a, int b)
{
    return a * b;
}
float div(int a, int b)
{
    return a / b;
}

int main()
{
    int a, b;
    int o;
    char c;

    for (;;)
    {
        printf("Enter y to start or Enter n to end\n");
        scanf(" %c", &c);

        if (c == 'n' || c== 'N')
        {
            continue;
        }
        else
        {
            printf("Enter a ");
            scanf("%d", &a);
            printf("Enter b ");
            scanf("%d", &b);

            printf("chhoose 1 for addition\n");
            printf("chhoose 2 for subtraction\n");
            printf("chhoose 3 for multiplication\n");
            printf("chhoose 4 for division\n");
            scanf("%d", &o);

            switch (o)
            {
            case 1:
                printf("Addition: %d\n", add(a, b));
                break;
            case 2:
                printf("subtraction: %d\n", sub(a, b));
                break;
            case 3:
                printf("Multiplication: %f\n", mul(a, b));
                break;
            case 4:
                printf("Division: %f\n", div(a, b));
                break;
            default:
                break;
            }
        }
    }

    return 0;
}
