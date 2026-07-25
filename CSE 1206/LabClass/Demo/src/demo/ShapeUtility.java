/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package demo;

/**
 *
 * @author AUST
 */
public class ShapeUtility {
    //usage of dynamic method dispatch
    //1. Code readibility and ease of modifying
    // here 
    public boolean compareArea(Shape a, Shape b) {
        return (a.calculateArea() > b.calculateArea());
    }
}
