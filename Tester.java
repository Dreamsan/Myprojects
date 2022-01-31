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
public class Tester {
    
    private static Tester instance = new Tester();
    private static Engine engine = new Engine();
    
    private Tester(){}
    
    public static Tester getInstance(){
        return instance;
    }
    
    public void testSystem(){
        engine.addTest();
        engine.dropTest();
        engine.changeProgramTest();
        engine.gradeAvgTest();
    }
    
}
