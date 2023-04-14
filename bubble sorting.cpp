#include<stdio.h>
#include<stdlib.h>



int main()
{
    int a[100];
    
    
     int n,i, temp;
    
     printf("\n\nEnter number of elements to be inserted\n");
     scanf("%d",&n);
     printf("\n\nEnter %d numbers\n",n);
     for(i=0;i<n;i++)
     {
           scanf("%d",&a[i]);
     }
     
     for(int k=0;k<n;k++)
         printf("%d\t",a[k]);
         
      //sorting by using bubble sort technique
	  
	  for(i=0;i<n-1;i++)   
	  {
	  	for(int j=0;j<n-i-1;j++)
	  	 {
	  	 	if(a[j]>a[j+1])
	  	 	 {
	  	 	 	temp = a[j];
	  	 	 	a[j]=a[j+1];
	  	 	 	a[j+1]= temp;
	  	 	 }
	  	 }
	  }
	  //after sorting
	  printf("\n after sorting");
	   for(i=0;i<n;i++)
     {
           printf("%d\t",a[i]);
     }
     
}
	  
	  
	  
	  
