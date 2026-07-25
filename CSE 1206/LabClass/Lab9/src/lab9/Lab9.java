/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package lab9;

import student.Student;

/**
 *
 * @author 01rohan
 */
public class Lab9 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        
        
        try {
            int d = Division.divide(5, 0);
        } catch (Exception ex) {
            System.out.println(ex.getMessage());
        }
        
        Student s1 = new Student();
        
        try {
            s1.setName("@aust");
        } catch(Exception ex) {
            System.out.println(ex.getMessage());
//        } finally { //will execute always
//            
//        }
    }
    
}
