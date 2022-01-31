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
enum degreeType{
    Bachelor,
    Master;
}
public class Degree {
    private degreeType dt;
    
    public Degree(String s){
        dt = (s == "b" ? degreeType.Bachelor : degreeType.Master);
    }
    
    public String toString(){
        return dt.toString();
    }
}
