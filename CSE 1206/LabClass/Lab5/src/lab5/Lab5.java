/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package lab5;
import java.util.Arrays;
import java.util.Scanner;
/**
 *
 * @author 01rohan
 */
public class Lab5 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        //Topics:
        //1. static keyword
        //2. Arrays
        
        Scanner in = new Scanner(System.in);
        
//        Student s1 = new Student();
//        Student.varsity = "AUST";
//        System.out.println(Student.varsity);
//        
//        s1.varsity = "BUET";
//        System.out.println(Student.varsity);
//        
//        Student.printVarsity();
//        
//        int[] arr = new int[10];
//        
        
        //reference var array
        Student studArr[] = new Student[3];
        
        for(int i = 0; i < studArr.length; i++) {
            String name = in.nextLine();
            int id = in.nextInt();
            in.nextLine();
            //we need to put object in every ref var
            studArr[i] = new Student(name, id);
        }
        
        
    }
    
}
