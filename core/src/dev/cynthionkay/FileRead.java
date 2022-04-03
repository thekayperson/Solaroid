package dev.cynthionkay;
import java.io.File;
import java.io.FileNotFoundException;
import java.lang.reflect.Array;
import java.util.ArrayList;
import java.util.Scanner;
//Please dont read this it is a travesty of justice
public class FileRead {


    ArrayList<String> theDEETS = new ArrayList<String>();
    public int i = 0;
    public FileRead(String fileName){

        //This is a variable

        try{
            int i = 1;
            File fileToRead = new File("/home/kay/Documents/Solaroid/assets/file.txt");
            Scanner fileReader = new Scanner(fileToRead);
            while(fileReader.hasNextLine()){
                //this might be a variable?
                String currentData = fileReader.nextLine();
                theDEETS.add(currentData);

            }
            fileReader.close();
       }
        catch(FileNotFoundException EveryoneCallsTheirExceptionEButImTooCoolForThat){

            System.out.println("lmao fucking dumbass you cant even read a file.");
            EveryoneCallsTheirExceptionEButImTooCoolForThat.printStackTrace();

        }


    }


}
//have fun refactoring this lol













































































































//hi
//i drank a cup of coffee before programming this
//it was not a good idea
//can you make this a multi line comment?
//i cant remember how to breathe