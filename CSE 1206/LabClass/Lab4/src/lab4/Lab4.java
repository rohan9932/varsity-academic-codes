/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package lab4;

/**
 *
 * @author 01rohan
 */
public class Lab4 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        //Topics
        // 1.Object Return
        // 2.Overloading
        // 3.Typecasting
        Tulip t1 = new Tulip("Blue", 10);
        Tulip t2 = new Tulip("Red", 12);
        
        Tulip mixedTulip = t2.mixTulip(t1);
        System.out.println(mixedTulip.getColor());
        System.out.println(mixedTulip.getLength());
    }
    
}
