/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package classsecond;

/**
 *
 * @author 01rohan
 */
public class Student {
    private String name;
    private int id;
    private int marks;
    
    public Student() {
        
    }
    
    public Student(String name, int id) {
        this.name = name;
        this.id = id;
    }    
    
    public void setName(String name) { //setter -> setAttributeName
        this.name = name;
    }
    
    private void setId(int id) {
        this.id = id;
    }
    
    public void setMarks(int marks) {
        this.marks = marks;
    }
    
    public String getName() { //getter -> getAttributeName / isAttributeName(boolean)
        return this.name;
    }
    
    public int getId() {
        return this.id;
    }
    
    public int getMarks() {
        return this.marks;
    }
}
