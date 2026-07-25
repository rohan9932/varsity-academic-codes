/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package codetest;
import java.util.Scanner;
/**
 *
 * @author 01rohan
 */
public class CodeTest {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Code code = new Code();
        CodeFactory cf = new CodeFactory();
        
        Scanner input = new Scanner(System.in);
        System.out.println("Input Methods: " + cf.createCode(input.nextInt()).getLinesOfCode());
        System.out.println("Input Methods, Lines Per Method: " + cf.createCode(input.nextInt(), input.nextInt()).getLinesOfCode());
        System.out.println("Input Methods, Lines Per Method, Redundant Line Per Method: " + cf.createCode(input.nextInt(), input.nextInt(), input.nextInt()).getLinesOfCode());
        
    }
    
}
