

#include <stdio.h>

int main()
{
    int a[10],large;
    printf("Enter the 10 array elements\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
       
    }
    large=a[0];
    for(int i=0;i<10;i++)
    {
        if(large<a[i])
        {
            large=a[i];
        }
       
    }
    
    
    printf("The greatest number in the array is %d\n",large);
   

    return 0;
}
