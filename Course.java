/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package srs;

import java.util.Map;

/**
 *
 * @author ycefq
 */
public class Course {
    private int id;
    private String name;
    private int creditHours;
    private Map sections;
    
    public Course(int id, String name, int hours){
        this.id = id;
        this.name = name;
        this.creditHours = hours;
    }
    
    public int getHours(){
        return this.creditHours;
    }
    
    public String toString(){
        return name;
    }
}
