/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package studentmanagement;

/**
 *
 * @author 01rohan
 */
public class StudentManager {
    static Student searchStudentById(Student[] students, int id) {
        for(int i = 0; i < students.length; i++) {
            if(students[i].getId() == id) {
                return students[i];
            }
        }
        
        return null;
    }
}
