/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package codetest;

/**
 *
 * @author 01rohan
 */
public class Code {
    private double linesOfCode;
    
    Code() {
        
    }
    
    public void setLinesOfCode(double linesOfCode) {
        if(linesOfCode <= 200) {
            this.linesOfCode = 250;
        } else {
            this.linesOfCode = linesOfCode;
        }
    }
    
    public double getLinesOfCode() {
        return this.linesOfCode;
    }
}
