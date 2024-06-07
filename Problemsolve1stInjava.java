import java.util.Scanner;


public class Solve1stProblem {
    public static void main(String[] args) {

Scanner sc =new Scanner(System.in);
double s1=0,s2=0,s3=0,s4=0,s5=0;
boolean s1c = false,s2c=false ,s3c=false,s4c =false ,s5c=false ;
while (!s1c){

{System.out.print("Enter 1st Subject mark ");
 
if (sc.hasNextDouble() && (s1=sc.nextDouble())<=100 && s1 >=0)
{
    
    System.out.println("1st Subject mark is "+ s1); 
      s1c=true ;
}
else 
{
    System.out.println("Invalid number ");
    sc.next();
}}}

while (!s2c){

    {System.out.print("Enter 2st Subject mark ");
     
    if (sc.hasNextDouble() && (s2=sc.nextDouble())<=100 && s2 >=0)
    {
       
        System.out.println("2nd Subject mark is "+ s2); 
          s2c=true ;
    }
    else 
    {
        System.out.println("Invalid number ");
        sc.next();
    }}}



    while (!s3c){

        {System.out.print("Enter 3st Subject mark ");
         
        if (sc.hasNextDouble() && (s3=sc.nextDouble())<=100 && s3 >=0)
        {
           
            System.out.println("3rd Subject mark is "+ s3); 
              s3c=true ;
        }
        else 
        {
            System.out.println("Invalid number ");
            sc.next();
        }}}



        while (!s4c){

            {System.out.print("Enter 4st Subject mark ");
             
            if (sc.hasNextDouble() && (s4=sc.nextDouble())<=100 && s4 >=0)
            {
               
                System.out.println("4th Subject mark is "+ s4); 
                  s4c=true ;
            }
            else 
            {
                System.out.println("Invalid number ");
                sc.next();
            }}}


            while (!s5c){

                {System.out.print("Enter 5th Subject mark ");
                 
                if (sc.hasNextDouble() && (s5=sc.nextDouble())<=100 && s5 >=0)
                {
                   
                    System.out.println("5st Subject mark is "+ s5); 
                      s5c=true ;
                }
                else 
                {
                    System.out.println("Invalid number ");
                    sc.next();
                }}}

          sc.close();
                
        double sum ;
        sum= (s1 + s2 + s3 + s4 + s5);

        double avg = sum / 5;

        System.out.println("Average mark is "+avg );





        
    }
}
