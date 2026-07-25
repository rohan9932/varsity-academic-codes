/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package stringbufferdemo;

/**
 *
 * @author Nawrin
 */
public class StringBufferDemo {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        
        String s1 = "Hello World";
        //these doesn't change the original output. We change the value and then refer it to the same reference variable
        s1 = s1.replace("H", "X");
        s1 = s1.concat("1");
        s1 = s1.replaceFirst("W", "");
        System.out.println(s1);
        
        /*
            The problem with this method is for minor changes we are making so many copies in the memory which is inefficient.
        */
        
        /*
            As stringBuffer is mutable. we use it for memory efficiency.
        */
        //append(String str)
        StringBuffer sb = new StringBuffer("Hello ");
        sb.append("CSE");
        System.out.println(sb);
        
        //insert(int index, String str) -> starts from idx+1
        sb.insert(9, "1206");
        System.out.println(sb);
        
        //replace(int start, int end, String str)
        sb.replace(6, 9, "Java");
        System.out.println(sb);
        
        //delete(int start, int end)
        sb.delete(6,10);
        System.out.println(sb);
        
        //reverse()
        sb.reverse();
        System.out.println(sb);
        
        System.out.println(sb.length());
        System.out.println(sb.charAt(5)); 
        System.out.println(sb.substring(5, 8)); //st to end-1
    }
    
}
