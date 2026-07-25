/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package demo;

/**
 *
 * @author 01rohan
 */
//if we put one abstract method in a class whole class should be abstract
public abstract class Shape {
    private String color;
    private boolean filled;
    
    public Shape() {}
    
    public Shape(String color, boolean filled) {
        this.color = color;
        this.filled = filled;
    }

    public String getColor() {
        return color;
    }

    public void setColor(String color) {
        this.color = color;
    }

    public boolean isFilled() {
        return filled;
    }

    public void setFilled(boolean filled) {
        this.filled = filled;
    }
    
    //abstract method => Don't have any body
    //like a blueprint of the method to inherit and modify in the children class
    public abstract double calculateArea();
}

