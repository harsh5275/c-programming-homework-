#include <stdio.h>

int main()
{
    int a,e,f;
    printf("Enter Initial Reading: ");
    scanf("%d", &e);
    printf("Enter Final Reading: ");
    scanf("%d", &f);
    a = f - e;
    
    if (a<=500 && a>=200)
    {
        printf("Total Amount Is %.2f rs", a*3.5);
    }
    else if (a<200 && a>=100)
    {
        printf("Total Amount Is %.2f rs", a*2.5);
    }
    else if (a<100)
    {
        printf("Total Amount Is %.2f rs", a*1.5);
    }
    else 
    {
        printf("Reading is greater than 500 units");
    }

    return 0;
}
