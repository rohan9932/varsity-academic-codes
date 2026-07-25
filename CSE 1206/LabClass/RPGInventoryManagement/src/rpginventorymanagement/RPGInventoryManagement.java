/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package rpginventorymanagement;
import java.util.Scanner;
/**
 *
 * @author 01rohan
 */
public class RPGInventoryManagement {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        // TODO code application logic here
        Potion h1 = new Health();
        Potion h2 = new Health();
        
        Potion s1 = new Stamina();
        Potion s2 = new Stamina();
        
        Inventory.addPotion(h1);
        Inventory.addPotion(h2);
        Inventory.addPotion(s1);
        Inventory.addPotion(s2);
        
        for(int i = 0; i < 2; i++) {
            System.out.println("Potion to activate: ");
            int idx = in.nextInt();
            Inventory.activatePotion(idx);
        }
    }
    
}
