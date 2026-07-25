/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package classsecond;

/**
 *
 * @author 01rohan
 */
public class ClassSecond {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Student s1 = new Student();
        
        //System.out.println(s1.id); //won't work
        s1.setName("Rohan");
        System.out.println(s1.getName());
        
        //s1.setId(122);
        System.out.println(s1.getId());
        
        s1.setMarks(97);
        
        GradeCalculator gcal = new GradeCalculator();
        System.out.println(gcal.calculateGrade(s1));
    }
    
}
