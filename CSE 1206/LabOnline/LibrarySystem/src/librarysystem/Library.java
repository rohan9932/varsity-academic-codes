/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package librarysystem;
import java.util.*;
/**
 *
 * @author 01rohan
 */
public class Library {
    private static ArrayList<Media> availableMedia = new ArrayList<Media>();
    
    public static void addMedia(Media m) {
        availableMedia.add(m);
        System.out.printf("%s was added.\n", m.getTitle());
    } 
    
    public static Media recommendMedia(Member m) {
        Media highestScore = availableMedia.get(0);
        int highestScoreIdx = 0;
        
        for(int i = 1; i < availableMedia.size(); i++) {
            if(availableMedia.get(i).getSuitability(m) > highestScore.getSuitability(m)) {
                highestScore = availableMedia.get(i);
                highestScoreIdx = i;
            }
        }
        
        availableMedia.remove(highestScoreIdx);
        return highestScore;
    }
}
