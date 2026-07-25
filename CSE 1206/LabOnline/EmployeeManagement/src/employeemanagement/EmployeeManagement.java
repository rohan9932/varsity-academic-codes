/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package employeemanagement;
import java.util.Scanner;
/**
 *
 * @author 01rohan
 */
public class EmployeeManagement {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner in = new Scanner(System.in);
        
        System.out.print("Enter the number of Employees: ");
        int employeeNum = in.nextInt();
        
        Employee[] employees = new Employee[employeeNum];
        
        for(int i = 0; i < employees.length; i++) {
            System.out.println("Enter details for Employee " + (i+1));
            in.nextLine();
            System.out.print("Name: ");
            String name = in.nextLine();
            System.out.print("Id: ");
            int id = in.nextInt();
            System.out.print("Salary: ");
            double salary = in.nextDouble();
            
            employees[i] = new Employee(name, id, salary);
        }
        
        System.out.println("Enter a salary threshold: ");
        double salaryThreshold = in.nextDouble();
        
        int[] employeesExceedingSalaryRange = EmployeeManager.filterEmployeeBySalary(employees, salaryThreshold);
        
 
        if(isArrNull(employeesExceedingSalaryRange)) {
            System.out.println("No employees found with salary higher than " + salaryThreshold);
        } else {
            System.out.println("Employees with salary higher than " + salaryThreshold);
            for(int i = 0; i < employeesExceedingSalaryRange.length; i++) {
                if(employeesExceedingSalaryRange[i] > 0) {
                    System.out.println(employeesExceedingSalaryRange[i]);
                }
            }
        }
    }
    
    
    static boolean isArrNull(int[] array) {
        for(int val: array) {
            if(val != 0) return false;
        }
        return true;
    }
}
