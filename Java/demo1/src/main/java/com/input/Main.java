package com.input;
import java.util.*;
public class Main {
    public static void main(String[] args) {
        System.out.println("Enter the sign you want to perform the operation on:");
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
         if(str.equals("+")){
             System.out.println("Enter two numbers:");
             int n1 = sc.nextInt();
             int n2 = sc.nextInt();
             System.out.println(n1 + n2);
         }
         else if(str.equals("-")){
             System.out.println("Enter two numbers:");
             int n1 = sc.nextInt();
             int n2 = sc.nextInt();
             System.out.println(n1 - n2);
        
         }
     else if(str.equals("*")){
             System.out.println("Enter two numbers:");
             int n1 = sc.nextInt();
             int n2 = sc.nextInt();
             System.out.println(n1*n2);
         }
         else if(str.equals("/")){
             System.out.println("Enter two numbers:");
             int n1 = sc.nextInt();
             int n2 = sc.nextInt();
             double div = (double)(n1/n2);
             System.out.println(div);
     }
         else System.out.println("Invalid Operator");
     }
  
    }
