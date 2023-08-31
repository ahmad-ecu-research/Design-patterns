// create singleton design pattern with 2 classes
//  1.  Singleton class
#Include <iostream.h>
#Include <conio.h>
#Include <string.h>
#Include <stdlib.h>
#Include <stdio.h>

class Singleton {
    private static Singleton instance;
    private Singleton() {}
    public static Singleton getInstance() {
        if (instance == null) {
            instance = new Singleton();
        }
        return instance;
    }
    public void print() {
        System.out.println("Singleton class");
    }
    public static void main(String[] args) {
        Singleton s1 = Singleton.getInstance();
        Singleton s2 = Singleton.getInstance();
        s1.print();
        s2.print();
    }

// linear search alogrithm in c++
    public static int search(String[] array, String str) {

        for (int i = 0; i < array.length; i++) {
            if (array[i].equals(str)) { return i; } 
        } 

        return -1; 
    } 
    // take input for array to be searched
    public static String[] inputArray() {

int searcharrlength = 0; 	//length of search array
int array[searcharrlength];
		//take input for array to be searched




}



