/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package stringdemo;

/**
 *
 * @author Nawrin
 */
public class StringDemo {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        
        char[] ch = {'C', 'S', 'E', '1', '2', '0', '6'};
        String string1 = new String(ch);        
        String string2 = "This is Object Oriented Programming Lab";
        
        //charAt(int index)
        System.out.println(ch[2]);
        System.out.println(string1.charAt(2));
        
        //length()
        System.out.println(string2.length());
        
        /*substring(int beginIndex)
          substring(int beginIndex, int endIndex)
        */
        System.out.println(string1.substring(3));
        System.out.println(string1.substring(3,5));
        
        //equals(String obj)
        System.out.println(string1.equals(string2));
        
        //concat(String str)
        string1.concat(string2);
        System.out.println(string1);
        
        string1 = string1.concat(string2);
        System.out.println(string1);
        
        /*replace(char oldChar, char newChar)
          replace(CharSequence target, CharSequence replacement)
        */
        String replaceString1 = string1.replace('m', 'n');
        System.out.println(replaceString1);
        
        String replaceString2 = string2.replace("is", "was");
        System.out.println(replaceString2);
        
        //toUpperCase/toLowerCase
        String upperString2 = string2.toUpperCase();
        System.out.println(upperString2);
        
        String lowerString2 = string2.toLowerCase();
        System.out.println(lowerString2);
        
        //split(String str)
        String[] splitString2 = string2.split(" ");
        
        for(int i=0; i<splitString2.length; i++){
            System.out.println(splitString2[i]);
        }
        
        //conversion from String
        String num = "2024";
        int i = Integer.parseInt(num);
        System.out.println(i);
        
        double d = Double.parseDouble(num);
        System.out.println(d);
        
        //conversion to String
        String str1 = Integer.toString(i);
        System.out.println(str1);
        
        String str2 = Double.toString(d);
        System.out.println(str2);       
    }
    
}
