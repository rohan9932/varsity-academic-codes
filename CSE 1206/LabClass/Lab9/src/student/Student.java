/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package student;

/**
 *
 * @author 01rohan
 */
public class Student {
    private String name;

    public void setName(String name) throws InvalidNameException { //need to specify throwtype
        //check the name
        //throw exception if necessary
        if(name.contains("@")) {
            throw new InvalidNameException();
        }
        this.name = name;
    }
    
    protected void displayName() { //only children can use(in different package) and all class in same package
        System.out.println(name);
    }
}
