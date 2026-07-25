/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package first.pkgclass;

/**
 *
 * @author 01rohan
 */
public class Student {
    int id;
    String name;
    String section;
    String varsity;
    
//    Student() {
//        this.varsity = "Ahsanullah University of Sceience and Technology";
//    }
//    
//    Student(int id, String name, String section) {
//        this.id = id;
//        this.name = name;
//        this.section = section;
//    }
//    
//    void setId(int id) {
//        this.id = id;
//    }
//    
//    void setName(String name) {
//        this.name = name;
//    }
//    
//    void changeSec(String newSec) {
//        section = newSec;
//    }
    
    String grade(int num) {
        if(num > 60) return "A+";
        else return "F";
    }
    
    void printName() {
        System.out.println(this.name);
    }
    
}
