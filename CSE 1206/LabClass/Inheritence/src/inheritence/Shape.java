/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package inheritence;

/**
 *
 * @author 01rohan
 */
public class Shape {
    private String color;
    private boolean filled;

    public String getColor() {
        return color;
    }

    public boolean isFilled() {
        return filled;
    }
    
    

//    public Shape() {
//        System.out.println("Shape was called.....");
//    }

    public Shape(String color, boolean filled) {
        this.color = color;
        this.filled = filled;
    }
    
    public void printArea() {
        System.out.println("Area cannot be calculated");
    }
    
}
