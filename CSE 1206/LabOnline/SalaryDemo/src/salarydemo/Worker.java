/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package salarydemo;

/**
 *
 * @author 01rohan
 */
public class Worker {
    private String designation;
    private int hoursWorked;
    
    Worker() {
        
    }
    
    Worker(String designation, int hoursWorked) {
        this.designation = designation;
        this.hoursWorked = hoursWorked;
    }
    
    //getters 
    void setDesignation(String designation) {
        this.designation = designation;
    }
    
    void setHoursWorked(int hoursWorked) {
        this.hoursWorked = hoursWorked;
    }
    
    //setters
    String getDesignation() {
        return this.designation;
    }
    
    int getHoursWorked() {
        return this.hoursWorked;
    }
    
}
