/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package movieticket;

/**
 *
 * @author 01rohan
 */
public class MovieTicket {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Customer customer1 = new Customer("Faria", 10, true);
        System.out.println("Faria's ticket price is " + customer1.calculateTicketPrice(100));
    }
    
}
