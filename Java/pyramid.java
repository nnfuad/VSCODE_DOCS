import java.util.Scanner;

 public class pattern2{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.out);
        System.out.println("Enter Row number for a number pyramid");
        int x = sc.nextInt();
        for(int i = 1 ; i<=x ;i++){
            for(int j = 1 ;j<(x-i) ; j++){
                System.out.print(" ");
            }
            for(int k = 1 ; k<=x ; k++){
                System.out.print(k);
            }
            System.out.println();
        }

    }
 }