/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package srs;

/**
 *
 * @author ycefq
 */
public class Instructor {
    private int id;
    private String name;
    private int salary;
    private School school;
    
    public Instructor(int id, int salary, String name, School school){
        this.id = id;
        this.name = name;
        this.salary = salary;
        this.school = school;
    }
}
