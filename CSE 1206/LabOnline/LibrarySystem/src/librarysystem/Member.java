/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package librarysystem;

/**
 *
 * @author 01rohan
 */
public class Member {
    private String name;
    private int readingLevel;

    public Member(String name, int readingLevel) {
        this.name = name;
        this.readingLevel = readingLevel;
    }

    public String getName() {
        return name;
    }

    public int getReadingLevel() {
        return readingLevel;
    }

    public void setName(String name) {
        this.name = name;
    }

    public void setReadingLevel(int readingLevel) {
        this.readingLevel = readingLevel;
    }
    
    
}
