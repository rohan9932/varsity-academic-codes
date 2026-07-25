/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package simpleautorpg;

/**
 *
 * @author 01rohan
 */
public class Player extends Character{
    public Player(double damage, double health) {
        super(damage, health);
    }

    @Override
    public double attack() {
        return getDamage()*MultiplierUtils.getRandomBuff();
    }
}
