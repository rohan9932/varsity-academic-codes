/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package simpleautorpg;
import java.util.*;
/**
 *
 * @author 01rohan
 */
public class SimpleAutoRPG {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Player p1 = new Player(10, 100);
        Villian v1 = new Villian(10, 100);
        
        while(true) {
            if(p1.getHealth() < 0) {
                System.out.println("Player Lost");
                break;
            }
            
            if(v1.getHealth() < 0) {
                System.out.println("Villian Lost");
                break;
            }
            
            p1.takeDamage(v1);
            v1.takeDamage(p1);
            
            System.out.printf("Player Health: %f, Villian health: %f\n", p1.getHealth(), v1.getHealth());
        }
    }
    
}
