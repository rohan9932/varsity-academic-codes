/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package chatapplication;

/**
 *
 * @author 01rohan
 */
public class DefaultMessage implements Messenger {
    private String sender;
    private String receiver;

    public DefaultMessage(String sender, String receiver) {
        this.sender = sender;
        this.receiver = receiver;
    }

    public String getSender() {
        return sender;
    }

    public String getReceiver() {
        return receiver;
    }

    public void setSender(String sender) {
        this.sender = sender;
    }

    public void setReceiver(String receiver) {
        this.receiver = receiver;
    }
    
    @Override
    public void sendMessage(String message) {
        System.out.printf("Sending to %s the message %s", receiver, message);
    }
    
    @Override
    public void receiveMessage(String message) {
        System.out.printf("%s send yout the message %s", sender, message);
    }
}
