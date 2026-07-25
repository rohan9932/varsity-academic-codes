/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package classsecond;

/**
 *
 * @author 01rohan
 */
public class GradeCalculator {
    public String calculateGrade(Student s) {
        int mark = s.getMarks();
        
        if(mark > 50) {
            return "A+";
        } else {
            return "F";
        }
    }
}
