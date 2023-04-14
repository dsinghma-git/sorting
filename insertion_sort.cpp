// lab Work - 21(c)
// Program for insertion Sort
#include<stdio.h>
#include<conio.h>

void insert(int a[100],int n)
{
	int i,j,key;
	
    for( j = 1;j < n ;j++)
    {
		key=a[j];
       for (i=j-1;i>=0 && a[i]>key ;i--)
		{
   			 a[i+1]= a[i];
		}
		a[i+1] = key;
       
	}  
}
int main()
{
	int a[100],n,i;
	printf("Enter no of elements\n");
	scanf("%d",&n);
	printf("Enter %d elements",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("elements before sort:\n");
	for(i=0;i<n;i++)
	{
	  printf("%d\t",a[i]);
	}
	insert(a,n);
	printf("\nelements after sort:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	getch();
}
