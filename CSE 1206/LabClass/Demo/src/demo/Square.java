/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package demo;

/**
 *
 * @author AUST
 */
public class Square  extends Rectangle{ 
    public Square(double side) {
        super(side, side);
    }
    
    @Override
    public String toString() {
        return super.getLength() + "";
    }
}
