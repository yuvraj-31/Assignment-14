

#include <stdio.h>

int main()
{   
    int n;
    printf("Enter the array size\n");
    scanf("%d",&n);
    int a[n];
    int b[n];
    
    printf("Enter the %d array elements:\n",n);
   for(int i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
       b[i]=a[i];
       
   }
  for(int i=0;i<n;i++)
  {
      printf(" %d",b[i]);
  }
  
   
    
    

    return 0;
}
