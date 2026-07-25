/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package movieticket;

/**
 *
 * @author 01rohan
 */
public class Customer {
    //attributes
    String customerName;
    int age;
    boolean isStudent;
    
    Customer() { //constructor 1
        
    }
    
    //constructor 2
    Customer(String customerName, int age, boolean isStudent) {
        this.customerName = customerName;
        this.age = age;
        this.isStudent = isStudent;
    }
    
    double calculateTicketPrice(double baseTicketPrice) {
        if(age <= 12 && isStudent == true) {
            return 0.8*baseTicketPrice;
        } else if (age > 12 && isStudent == true) {
            return 1.1*baseTicketPrice;
        } else {
            return baseTicketPrice + (0.15*baseTicketPrice);
        }
    }
}
