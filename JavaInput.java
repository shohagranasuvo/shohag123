
import java.util.Scanner;

public class Input {
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);

         System.out.println ("Enter A Number :");

        int a = sc.nextInt();

        System.out.println ("Enter A Number :");

        int b = sc.nextInt();

        int sum =a+b;

         System.out.println("The number sum  is "+sum);

           sc.nextLine();

          System.out.println("Enter a message ");
         String c =sc.nextLine();

         System.out.println("The message is "+c); 
         boolean check=false;

        while(!check){
         
         {System.out.println("Enter a int ");

         boolean b1 = sc.hasNextInt();
         

         //System.out.println(b1);
         if (b1)
         {
              int i1 = sc.nextInt();
            System.out.println("It's a integer and it is "+i1);
            check=true ;
         }
         else{
            System.out.println("It's not a integer");
            sc.next();
         }}}
        


         sc.close();

        
    }
}
