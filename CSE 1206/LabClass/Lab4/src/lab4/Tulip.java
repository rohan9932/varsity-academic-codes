/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package lab4;

/**
 *
 * @author 01rohan
 */
public class Tulip {
    private String color;
    private double length;
    
    Tulip() {
        
    }
    
    Tulip(String color, double length) {
        this.color = color;
        this.length = length;
    }
    
    //setter
    public void setColor(String color) {
        this.color = color;
    }
    public void setLength(double length) {
        this.length = length;
    }
    
    //getter 
    public String getColor() {
        return this.color;
    }
    public double getLength() {
        return this.length;
    }
    
    //methods
    //we can return object
    public Tulip mixTulip(Tulip other) {
        Tulip mixedTulip = new Tulip();
        
        String mixedTulipColor = this.color + other.color;
        mixedTulip.setColor(mixedTulipColor);
        
        double mixedTulipLength = (this.length + other.length)/2;
        mixedTulip.setLength(mixedTulipLength);
        
        return mixedTulip;
    }
}
