/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package employeemanagement;

/**
 *
 * @author 01rohan
 */
public class Employee {
    private String name;
    private int id;
    private double salary;
    
    Employee() {
        
    }
    
    Employee(String name, int id, double salary) {
        this.name = name;
        this.id = id;
        this.salary = salary;
    }
    
    //getter setter
    void setName(String name) {
        this.name = name;
    }
    
    void setId(int id) {
        this.id = id;
    }
    
    void setSalary(int salary) {
        this.salary = salary;
    }
    
    String getName() {
        return this.name;
    }
    
    int getId() {
        return this.id;
    }
    
    double getSalary() {
        return this.salary;
    }
}
