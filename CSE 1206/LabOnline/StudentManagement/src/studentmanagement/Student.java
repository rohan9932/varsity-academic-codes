/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package studentmanagement;

/**
 *
 * @author 01rohan
 */
public class Student {
    private String name;
    private int id;
    
    Student() {
        
    }
    
    Student(String name, int id) {
        this.name = name;
        this.id = id;
    }
    
    //getter and setter
    void setName(String name) {
        this.name = name;
    }
    
    void setId(int id) {
        this.id = id;
    }
    
    String getName() {
        return this.name;
    }
    
    int getId() {
        return this.id;
    }
    
    
}
