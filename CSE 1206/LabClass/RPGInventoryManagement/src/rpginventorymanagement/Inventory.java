/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package rpginventorymanagement;
import java.util.*;
/**
 *
 * @author 01rohan
 */
public class Inventory {
    private static ArrayList<Potion> potionList = new ArrayList<Potion>(); 
    
    public static void addPotion(Potion p) {
        potionList.add(p);
        System.out.printf("Total potions: %d\n", potionList.size());
    }
    
    public static void activatePotion(int idx) {
        if(idx < potionList.size()) {
            potionList.get(idx).addEffect();
        } else {
            System.out.println("Invalid Index");
        }
    }
}
