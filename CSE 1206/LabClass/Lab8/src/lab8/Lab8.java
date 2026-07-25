/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package lab8;

/**
 *
 * @author 01rohan
 */
public class Lab8 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        String s1 = "Hello World";
        String s2 = "Hello World";
        String s3 = new String("Hello World");
        
        System.out.println(s1 == s2);
        System.out.println(s2 == s3);
        
        StringBuffer sb1 = new StringBuffer(s1);
        //st, end, replace string
        sb1.replace(0, 1, "X");
        
        System.out.println(sb1);
    }
    
}
