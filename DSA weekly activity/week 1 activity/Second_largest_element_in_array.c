//CH.SC.U4AIE25069
//To find second largest number
#include <stdio.h>
int main()
{
    int a[30], max, max2, i, size;

    printf("Enter size: ");
    scanf("%d", &size);

    for (i = 0; i < size; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    max = max2 = a[0];
    
    for ( i = 1; i < size; i++)
    {
         if (a[i] > max)
        {
            max2 = max;
            max = a[i];
        }
        else if (a[i] < max && (max == max2 || a[i] > max2))
        {
            max2 = a[i];
        }
    }
    if (max == max2)
        printf("No second largest element");
    else
        printf("Second largest element is: %d", max2);
}