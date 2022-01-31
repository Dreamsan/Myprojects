/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package srs;

import java.util.ArrayList;

/**
 *
 * @author ycefq
 */
public class Student {
    private int id;
    private String name;
    private Degree degree;
    private School school;
    private Program program; 
    private StudyingType st;
    
    private final int MAX = 18;
    private final int MIN = 12;
    private int hours = 0;
    private ArrayList<Course> courses;
    private ArrayList<Integer> grades;
    
    public Student(int id, String name, Degree degree,School school,  Program program,StudyingType st){
        this.degree = degree;
        this.id = id;
        this.name = name;
        this.program = program;
        this.school = school;
        this.st = st;
        
        courses = new ArrayList<>();
        grades = new ArrayList<>();
    }
    
    public void add(Course course){
        if( ((hours + course.getHours()) <= MAX) && !(courses.contains(course)) ){
            courses.add(course);
            hours += course.getHours();
            if(hours<MIN){
                System.out.println("\n\nHours taken: "+ hours +"\nyou haven't reached the minimum number of hours required!");
            }else{
                System.out.println("\n\nHours taken: "+ hours);
            }
        }else{
            System.out.println("The maximum nummber of hours allowed is 18!\nRegistration Failed");
        } 
            
    }
    
    public void drop(Course course){
        if(courses.contains(course)){
            courses.remove(course);
            hours -= course.getHours();
        }else{
            System.out.println("Cannot drop a course you're not registered in!");
        }   
    }
    
    public void changeProgram(Program program){
        this.program = program;
        courses.clear();
        hours = 0;
    }
    
    public ArrayList<Course> getCourses(){
        return courses;
    }
    
    public int getHours(){
        return hours;
    }
    
    public Program getProgram(){
        return program;
    }
    
    public void setGrades(int...grades){
        for(int grade : grades){
            this.grades.add(grade);
        }
    }
    
    public int calcAverage(){
        int ret=0;
        for(int grade : grades){
            ret += grade;
        }
        return ret/grades.size();
    }
}

