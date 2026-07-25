/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package lab5;

/**
 *
 * @author 01rohan
 */
public class Student {
    String name;
    int id;
    static String varsity;
    
    Student(String name, int id) {
        this.name = name;
        this.id = id;
    }
    
//    static void printVarsity() {
//        System.out.println(varsity);
//        //non static code can't be accessed from static methods
//        //System.out.println(id); 
//    }
    
//    Static void printArray(int[] arr) {
//        for(int i = 0; i < arr.length; i++) {
//            System.out.println(arr[i]);
//        }
//    }
    
    static void setIds(Student[] students) {
        for(int i = 0; i < students.length; i++) {
            students[i].id = i+1;
        }
    }
}
