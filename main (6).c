

#include <stdio.h>

int main()
{
    int a[10];
    printf("Enter the 10 array elements\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
       
    }
    int temp;
    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)
        {
           if(a[i]>a[j])
           {
             temp=a[i];
             a[i]=a[j];
             a[j]=temp;
             
           }
        }
       
    }
    
    
    printf("The sorted array is\n");
    for(int i=0;i<10;i++)
    {
        printf(" %d",a[i]);
    }
   

    return 0;
}
