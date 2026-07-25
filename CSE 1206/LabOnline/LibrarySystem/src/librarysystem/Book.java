/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package librarysystem;

/**
 *
 * @author 01rohan
 */
public class Book extends Media {
    private double requiredLevel;

    public Book(double requiredLevel, String title, double baseScore) {
        super(title, baseScore);
        this.requiredLevel = requiredLevel;
    }

    

    public double getRequiredLevel() {
        return requiredLevel;
    }

    public void setRequiredLevel(double requiredLevel) {
        this.requiredLevel = requiredLevel;
    }
    
    @Override
    public double getSuitability(Member obj) {
        if(obj.getReadingLevel() < this.requiredLevel) {
            return 0.0;
        } 
        return super.getBaseScore();
    }
}
