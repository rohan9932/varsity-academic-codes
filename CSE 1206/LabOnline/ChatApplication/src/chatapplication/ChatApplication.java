/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package chatapplication;

/**
 *
 * @author 01rohan
 */
public class ChatApplication {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Whatsapp w = new Whatsapp("A", "B", "C");
        DefaultMessage m = new DefaultMessage("B", "C");
        
        w.sendCall();
        w.receiveCall();
        w.showStatus("Seen");
        w.sendPhoto("Image");
        w.receiveCall();
        w.receiveImage("Image");
    }
    
}
