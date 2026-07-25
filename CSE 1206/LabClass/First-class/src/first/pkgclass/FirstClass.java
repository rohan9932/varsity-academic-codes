/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package first.pkgclass;

/**
 *
 * @author 01rohan
 */
public class FirstClass {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Student s1 = new Student();
        s1.name = "Rohan";
        s1.id = 122;
        
//        System.out.println("Student's name " + s1.name);
//        System.out.println("Student's ID: " + s1.id);

        System.out.println(s1.grade(75));
        
        s1.printName();    
    }
    
}
