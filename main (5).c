

#include <stdio.h>

int main()
{
    int a[10],small;
    printf("Enter the 10 array elements\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
       
    }
    small=a[0];
    for(int i=0;i<10;i++)
    {
        if(small>a[i])
        {
            small=a[i];
        }
       
    }
    
    
    printf("The smallest number in the array is %d\n",small);
   

    return 0;
}
