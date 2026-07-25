/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package librarysystem;

/**
 *
 * @author 01rohan
 */
public abstract class Media {
    private String title;
    private double baseScore;

    public Media(String title, double baseScore) {
        this.title = title;
        this.baseScore = baseScore;
    }

    public String getTitle() {
        return title;
    }

    public double getBaseScore() {
        return baseScore;
    }

    public void setTitle(String title) {
        this.title = title;
    }

    public void setBaseScore(double baseScore) {
        this.baseScore = baseScore;
    }
    
    public abstract double getSuitability(Member obj);
}
