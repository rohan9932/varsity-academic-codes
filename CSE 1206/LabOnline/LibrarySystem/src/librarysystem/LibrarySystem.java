/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package librarysystem;

/**
 *
 * @author 01rohan
 */
public class LibrarySystem {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Member m1 = new Member("Alice", 8);
        Member m2 = new Member("Bob", 4);
        
        Media b1 = new Book(7, "Cosmos", 9.0);
        Media b2 = new Book(10, "Advanced Calculus", 9.5);
        
        Media mag1 = new Magazine(5, "Sci-Fi Monthly", 8.5);
        
        Library.addMedia(b1);
        Library.addMedia(b2);
        Library.addMedia(mag1);
        
        Media r1 = Library.recommendMedia(m1);
        Media r2 = Library.recommendMedia(m2);
        
        System.out.printf("%s is recommended for %s\n", r1.getTitle(), m1.getName());
        System.out.printf("%s is recommended for %s\n", r2.getTitle(), m2.getName());
    }
    
}
