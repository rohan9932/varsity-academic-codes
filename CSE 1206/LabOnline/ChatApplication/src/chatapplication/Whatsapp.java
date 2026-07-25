/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package chatapplication;

/**
 *
 * @author 01rohan
 */
public class Whatsapp extends ModernMessenger {

    public Whatsapp(String caller, String sender, String receiver) {
        super(caller, sender, receiver);
    }
    
    public void showStatus(String status) {
        System.out.printf("Message is %s", status);
    }
}
