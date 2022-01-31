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
public class Engine {
    private Degree degree;
    private ITschool school;
    private Program program; 
    private Program program2;
    private Course course1;
    private Course course2;
    private Course course3;
    private Course course4;
    private Course course5;
    private Course course6;
    private Student johnny;
    
    public Engine(){
        degree = new Degree("b");
        school = new ITschool(55);
        program = school.chooseProgram("CS"); 
        program2 = school.chooseProgram("DS");
        course1 = new Course(22,"Algorithms",4); program.addCourse(course1);
        course2 = new Course(23,"Data Structres",4); program.addCourse(course2);
        course3 = new Course(24,"Mathmetics",3); program.addCourse(course3);
        course4 = new Course(25,"Object Oriented Programming", 6); program.addCourse(course4);
        course5 = new Course(26,"Artificial Inteligence", 3); program.addCourse(course5);
        course6 = new Course(27,"Compilers",2); program.addCourse(course6);
        johnny = new Student(123, "Johnny", degree, school, program, StudyingType.Regular);
    }
    
    public void addTest(){
        System.out.println("Adding courses functionality: \n\n");
        johnny.add(course1);
        johnny.add(course2);
        johnny.add(course3);
        johnny.add(course4);
        johnny.add(course5);
        System.out.println(johnny.getCourses());
        System.out.println(johnny.getHours() + "\n\n" );
    }
    
    public void dropTest(){
        System.out.println("Dropping courses functionality: \n\n");
        johnny.drop(course2);
        System.out.println(johnny.getCourses());
        System.out.println(johnny.getHours()+ "\n\n" );
    }
    
    public void changeProgramTest(){
        System.out.println("changing program functionality: \n\n");
        System.out.println(johnny.getProgram());
        johnny.changeProgram(program2);
        System.out.println(johnny.getProgram()+ "\n\n" );
    }
    
    public void gradeAvgTest(){
        System.out.println("calculating grade average functionality: \n\n");
        johnny.setGrades(4,3,2,4,3);
        System.out.println("Grade Average is: " + johnny.calcAverage());
    }
}
