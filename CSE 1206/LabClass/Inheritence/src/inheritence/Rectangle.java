/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package inheritence;

/**
 *
 * @author 01rohan
 */
public class Rectangle extends Shape {
    private double height;
    private double width;

    public Rectangle(double height, double width, String color, boolean isFilled) {
        super(color, isFilled); //need to call in the first line
        this.height = height;
        this.width = width;
    }
    
    @Override
    public void printArea() {
        System.out.println("Area: " + (height*width));
    }
    
    @Override
    public String toString() {
        String out = height + " " + width;
        return out;
    }
}
