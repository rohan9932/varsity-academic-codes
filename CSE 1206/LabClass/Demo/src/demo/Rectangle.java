/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package demo;

/**
 *
 * @author AUST
 */
public class Rectangle extends Shape {
    private double length;
    private double height;

    public Rectangle() {}

    public Rectangle(double length, double height) {
        this.length = length;
        this.height = height;
    }

    public Rectangle(double length, double height, 
            String color, boolean filled) {
        super(color, filled);
        this.length = length;
        this.height = height;
    }

    public double getLength() {
        return length;
    }

    public void setLength(double length) {
        this.length = length;
    }

    public double getHeight() {
        return height;
    }

    public void setHeight(double height) {
        this.height = height;
    }
    
    @Override
    public double calculateArea() {
        return length * height;
    }
}

