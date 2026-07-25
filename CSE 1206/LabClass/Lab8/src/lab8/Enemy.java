/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Interface.java to edit this template
 */
package lab8;

/**
 *
 * @author 01rohan
 */
public class Enemy implements Damagable {
    private int hitPoint;
    
    @Override
    public void takeDamage(double damage) {
        this.hitPoint -= damage;
    }
}
