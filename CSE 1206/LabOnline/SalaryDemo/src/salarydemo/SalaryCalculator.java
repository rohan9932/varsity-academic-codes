/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package salarydemo;

/**
 *
 * @author 01rohan
 */
public class SalaryCalculator {
    SalaryCalculator() {
        
    }
    
    double calculateSalary(Worker person) {
        String workerDesignation = person.getDesignation();
        int hoursWorked = person.getHoursWorked();
        
        if(workerDesignation.equals("Salesman")) {
            return hoursWorked*100;
        } else if(workerDesignation.equals("Manager")) {
            return hoursWorked*110;
        } else {
            return hoursWorked*60;
        }
    }
}
