/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package gamelibrary;

/**
 *
 * @author 01rohan
 */
public class Game {
    private int gameId;
    private String title;
    private double rating;
    public static int totalAvailableGames = 0;
    
    Game(int gameId, String title, double rating) {
        this.gameId = gameId;
        this.title = title;
        this.rating = rating;
        this.totalAvailableGames += 1;
    }
    
    //getter setter
    public double getRating() {
        return this.rating;
    }
    public String getTitle() {
        return this.title;
    }
    public int getId() {
        return this.gameId;
    }
    
    void printDetails() {
        System.out.println("Game id: " + this.gameId);
        System.out.println("Game title: " + this.title);
        System.out.println("Rating: " + this.rating);
    }
}
