/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package student;

/**
 *
 * @author 01rohan
 */
public class InvalidNameException extends Exception{
    public InvalidNameException() {
        super("Name contains @a");
    }
}
