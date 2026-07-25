/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package playerdemo;

/**
 *
 * @author 01rohan
 */
public class PlayerDemo {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Player p1 = new Player("new", 60, 80);
        
        System.out.printf("Type of Player: %s\n", p1.playerType);
        System.out.printf("Total Score: %.1f\n", p1.totalScore);
        System.out.printf("Total Matches: %.1f\n", p1.totalMatches);
        System.out.printf("Final Score %.2f\n", p1.calculateFinalScore());
    }
    
}
