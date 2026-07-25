/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package gamelibrary;
import java.util.Scanner;
/**
 *
 * @author 01rohan
 */
public class GameLibrary {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner in = new Scanner(System.in);
        
        int gameinput;
        System.out.println("Enter the game objects you want to create: ");
        gameinput = in.nextInt();
        
        Game[] games = new Game[gameinput];
        for(int i =0; i < games.length; i++) {
            int id = in.nextInt();
            in.nextLine();
            String title = in.nextLine();
            double rating = in.nextDouble();
            games[i] = new Game(id, title, rating);
        }
        
        LibraryHelper libraryHelper = new LibraryHelper();
        String[] arr = libraryHelper.filterByRating(games, 500);
        for(int i =0 ; i < arr.length; i++) {
            if(arr[i] != null) {
                System.out.println(arr[i]);
            }
        }
        LibraryHelper.printAllGames(games);
        System.out.println(Game.totalAvailableGames);
    }
    
}
