/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package salarydemo;
import java.util.Scanner;

/**
 *
 * @author 01rohan
 */
public class SalaryDemo {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner input = new Scanner(System.in);
        
        Worker worker1 = new Worker();
        SalaryCalculator calculator = new SalaryCalculator();
        
        System.out.print("Designation: ");
        worker1.setDesignation(input.nextLine());
        System.out.print("Hours Worked: ");
        worker1.setHoursWorked(input.nextInt());
        
        double salary = calculator.calculateSalary(worker1);
        
        System.out.println("Salary is: " + salary);
    }
    
}
