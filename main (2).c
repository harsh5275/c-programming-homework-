#include <stdio.h>
int main()
{
    int i;
    printf("Enter number to reverse from: ");
    scanf("%d", &i);
    
    while (i>0)
    {
        printf("%d\n", i);
        i--;
    }
    
    return 0;
}