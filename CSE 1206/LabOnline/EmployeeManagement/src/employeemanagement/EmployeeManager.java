/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package employeemanagement;

/**
 *
 * @author 01rohan
 */
public class EmployeeManager {
    static int[] filterEmployeeBySalary(Employee[] employees, double salaryRange) {
        int[] employeesExceedingRange = new int[employees.length];
        for(int i = 0; i < employees.length; i++) {
            if(employees[i].getSalary() > salaryRange) {
                employeesExceedingRange[i] = employees[i].getId();
            }
        }
        
        return employeesExceedingRange;
    }
    
    
}
