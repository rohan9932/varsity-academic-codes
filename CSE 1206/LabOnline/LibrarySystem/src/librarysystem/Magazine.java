/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package librarysystem;

/**
 *
 * @author 01rohan
 */
public class Magazine extends Media {
    private double optimalLevel;

    public Magazine(double optimalLevel, String title, double baseScore) {
        super(title, baseScore);
        this.optimalLevel = optimalLevel;
    }

    public double getOptimalLevel() {
        return optimalLevel;
    }

    public void setOptimalLevel(double optimalLevel) {
        this.optimalLevel = optimalLevel;
    }
    
    @Override
    public double getSuitability(Member obj) {
        double ans = super.getBaseScore() - Math.abs(obj.getReadingLevel() - this.optimalLevel);
        return ans;
    }
}
