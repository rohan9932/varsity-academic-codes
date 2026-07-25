/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package gamelibrary;

/**
 *
 * @author 01rohan
 */
public class LibraryHelper {
    public static String[] filterByRating(Game[] games, double rating) {
        String[] greaterThanRatingTitles = new String[games.length];
        for(int i = 0; i < games.length; i++) {
            if(games[i].getRating() > rating) {
                greaterThanRatingTitles[i] = games[i].getTitle();
            }
        }
        return greaterThanRatingTitles;
    }
    
    public static void printAllGames(Game[] games) {
        for(int i = 0; i < games.length; i++) {
            System.out.println("Game ID: " + games[i].getId());
            System.out.println("Game Title: " + games[i].getTitle());
            System.out.println("Game Rating: " + games[i].getRating());
        }
    }
}
