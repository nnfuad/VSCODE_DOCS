import java.util.Scanner;

public class patternjava1 {

    public static void main(String args[]){
        // System.out.println("Enter the row number:");
        // Scanner sc = new Scanner(System.in);
        // int x = sc.nextInt();
        // System.out.println("Enter the number of asterisks per row:");
        // int y = sc.nextInt();
        // for (int i = 1 ; i<=x ; i++){
        //     for(int j= 1 ; j<=(x-i) ; j++){
        //         System.out.print(" ");
        //     }
        //     for(int k = 0 ; k<y ; k++){
        //         System.out.print("*");
        //     }
        //     System.out.println();
        // }       //FOR TOTAL RHOMBUS
        //NOW<<<<<<<FOR HOLLOW RHOMBUS:
        
        
        System.out.println("Enter the row number:");
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        System.out.println("Enter the number of asterisks per row:");
        int y = sc.nextInt();
        for(int i = 1 ; i<=x ; i++){
            for(int j= 1 ; j<=(x-i) ; j++){
                System.out.print(" ");
            }
            for(int k= 1 ; k<=y ;k++){
                if(i == 1 || i==x){
                    System.out.print("*");
                }
                else{
                     if(k==1 || k==y) System.out.print("*");
                     else System.out.print(" ");
                }     
            }
            System.out.println();
        }
    }
}
