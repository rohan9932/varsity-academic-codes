/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package studentmanagement;
import java.util.Scanner;
/**
 *
 * @author 01rohan
 */
public class StudentManagement {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        // TODO code application logic here
        Student[] students = new Student[5];
        
        System.out.println("Enter details for 5 students: ");
        for(int i = 0; i < students.length; i++) {
            System.out.println("Student " + (i+1) + " name: ");
            String name = in.nextLine();
            System.out.println("Student " + (i+1) + " id: ");
            int id = in.nextInt();
            in.nextLine();
            
            students[i] = new Student(name, id);
        }
        
        System.out.println("Enter the id to search: ");
        int searchId = in.nextInt();
        
        Student foundSt = StudentManager.searchStudentById(students, searchId);
        if(foundSt == null) {
            System.out.println("Student not found");
        } else {
            System.out.println("Student Found: " + foundSt.getName());
            
        }
    }
    
}
