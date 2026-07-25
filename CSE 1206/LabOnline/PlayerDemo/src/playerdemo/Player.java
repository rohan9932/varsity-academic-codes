/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package playerdemo;

/**
 *
 * @author 01rohan
 */
public class Player {
    String playerType;
    double totalScore;
    double totalMatches;
    
    Player() {
        
    }
    
    Player(String playerType, double totalScore, double totalMatches) {
        this.playerType = playerType;
        this.totalScore = totalScore;
        this.totalMatches = totalMatches;
    }
    
    double calculateFinalScore() {
        if(this.playerType == "new") {
            return (totalScore/totalMatches);
        }
        
        return (2*totalScore*totalMatches)/(totalScore+totalMatches);
    }
}
