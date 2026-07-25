/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package demo;
import java.util.Scanner;
import java.util.ArrayList;
/**
 *
 * @author 01rohan
 */
public class Demo {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        //Study Topics:
        //1. Dynamic Method Dispatch
        //2. Generics
        //3. ArrayList
        
        
        Shape s = new Rectangle(20, 30);
        //here calculateArea() of Rectangle is called
        //this process is called dynamic method dispatch
        double area = s.calculateArea();
        System.out.println(area);
        
        ArrayList<Integer> arr = new ArrayList<>(10);
        arr.add(5);
        arr.add(0, 4);
        arr.remove(1);
        System.out.println(arr.size());
        System.out.println(arr);
        
        System.out.println(arr.get(0));
        
        ArrayList<Square> sq = new ArrayList<>();
        
        sq.add(new Square(10));
        sq.add(new Square(20));
        sq.add(new Square(30));
        
        System.out.println(sq);
        
        //Generics
        Something<Integer> a = new Something<>();
    }
    
}
