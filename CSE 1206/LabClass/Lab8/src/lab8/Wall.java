/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package lab8;

/**
 *
 * @author 01rohan
 */
public class Wall implements Damagable {
    int health;
    
    @Override
    public void takeDamage(double damage) {
        this.health -= damage;
    }
}
