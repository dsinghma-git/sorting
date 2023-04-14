import java.util.Scanner;

class BubbleSort
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
     
    for(i=0;i<n-1;i++)   
	  {
	  	for(j=0;j<n-i-1;j++)
	  	 {
	  	 	if(a[j]>a[j+1])
	  	 	 {
	  	 	 	temp = a[j];
	  	 	 	a[j]=a[j+1];
	  	 	 	a[j+1]= temp;
	  	 	 }
	  	 }
	  }
     System.out.println("The sorted data are: \n");
     for(i=0;i<n;i++)
        System.out.print(a[i]+"\t");
}
}