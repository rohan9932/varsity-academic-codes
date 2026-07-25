/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package codetest;

/**
 *
 * @author 01rohan
 */
public class CodeFactory {
    public Code createCode(int methods) {
        Code newCode = new Code();
        double linesOfCode = methods*20;
        newCode.setLinesOfCode(linesOfCode);
        return newCode;
    }
    
    public Code createCode(int methods, int linesPerMethod) {
        Code newCode = new Code();
        double linesOfCode = methods*linesPerMethod;
        newCode.setLinesOfCode(linesOfCode);
        return newCode;
    }
    
    public Code createCode(int methods, int linesPerMethod, int redundantLinePerMethod){  
        Code newCode = new Code();
        double linesOfCode = (methods*linesPerMethod)/redundantLinePerMethod;
        newCode.setLinesOfCode(linesOfCode);
        return newCode;
    }
}
