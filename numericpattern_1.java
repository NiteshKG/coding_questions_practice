/******************************************************************************
    1
   1 2
  1   3
 1     4
1 2 3 4 5
*******************************************************************************/
import java.util.Scanner;
public class numericpattern_1
{
    
    static void pattern(int n){
        int p,q=1;
        for(int i=1;i<=n;i++){
            for(int s=1;s<=n-i;s++)
                 System.out.print(" ");
                for(p=1;p<=2*i-1;p++){
                    if(i==n){
                        if(p%2==0)
                        System.out.print(" ");
                        else{
                            
                        System.out.print(q);
                        q++;
                    }
                    }
                    else{
                         
                    if(p==1)
                    System.out.print(1);
                    else if(p==2*i-1)
                    System.out.print(i);
                    else
                    System.out.print(" ");
                    }
                   
                }
                 
                
            
            
            System.out.println();
        }
    }
	public static void main(String[] args) {
	   Scanner obj = new Scanner(System.in);
	   try {
        System.out.print("Enter value of n: ");
        int n = Integer.parseInt(obj.nextLine()); // Convert the input to an integer
        pattern(n);
    } finally {
        // Close the Scanner in a finally block to ensure it's always closed
        obj.close();
    }
	}
}