#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, d, real, img, root1, root2;

    printf("Comparing to the equation - ax^2+bx+c \n");

    printf("The Value of a = ");
    scanf("%f", &a);

    printf("The Value of b = ");
    scanf("%f", &b);

    printf("The Value of c = ");
    scanf("%f", &c);
    getchar();

    if (a == 0)
    {
        printf("This is not a quadrtic Equation");
    }

    if (a != 0)
    {
        d = (b * b) - (4 * a * c);
        printf("\nThis is a Quadratic Equation\n");
        if (d > 0)
        {
            printf("As the Discriminant is greater than 0,The Roots of the Equation are Real\n");
            root1 = (-b + sqrt(d)) / 2 * a;
            root2 = (-b - sqrt(d)) / 2 * a;

            printf("\nRoot1 = %.2f ", root1);
            printf("\nRoot2 = %.2f ", root2);
        }
        else if (d < 0)
        {
            printf("As the Discriminant is less than 0,The Roots of the Equation are Complex and Different\n");
            real = -b / 2 * a;
            img = sqrt(-d) / 2 * a;

            printf("\nRoot1 = %.2f+%.2fi ", real, img);
            printf("\nRoot2 = %.2f-%.2fi ", real, img);
        }
        else if (d == 0)
        {
            printf("As the Discriminant is less than 0,The Roots of the Equation are Real and Equal");

            root1 = -b / 2 * a;
            printf("Root = %.2f", root1);
        }
    }

    printf("\n\nPress Enter to exit");
    getchar();
    return 0;
}