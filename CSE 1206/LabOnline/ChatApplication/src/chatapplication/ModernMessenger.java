/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package chatapplication;

/**
 *
 * @author 01rohan
 */
public class ModernMessenger extends DefaultMessage implements Caller {
    private String caller;

    public ModernMessenger(String caller, String sender, String receiver) {
        super(sender, receiver);
        this.caller = caller;
    }
    
    @Override
    public void sendCall() {
        System.out.printf("Calling %s", super.getReceiver());
    }
    
    @Override
    public void receiveCall() {
        System.out.printf("%s is calling you.", caller);
    }
    
    public void sendPhoto(String image) {
        System.out.printf("Sending %s the image %s", super.getReceiver(), image);
    }
    
    public void receiveImage(String image) {
        System.out.printf("%s sent you the image %s", super.getSender(), image);
    }
}
