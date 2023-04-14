import java.util.Scanner;

class InsertionSort
{
   public static void main(String [] args)
   {
     int [] a= new int[100];
     int n,i,j,temp;
     Scanner sc  = new Scanner(System.in);
     System.out.println("Enter  number of elements:");
     n = sc.nextInt();
     System.out.println("Enter " + n + "  numbers to sort: ");
     for(i=0;i<n;i++)
     {
         a[i] = sc.nextInt();
     }
     
   for( j = 1;j < n ;j++)
    {
		temp=a[j];
       for (i=j-1;i>=0 && a[i]>temp ;i--)
	{
   	 a[i+1]= a[i];
         }
	a[i+1] = temp;
       
	}  
     System.out.println("The sorted data are: \n");
     for(i=0;i<n;i++)
        System.out.print(a[i]+"\t");
}
}