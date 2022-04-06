package dev.cynthionkay.utils;
import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Scanner;
//Please dont read this it is a travesty of justice
public class SaveFileRead {


    public ArrayList<String> theDEETS = new ArrayList<String>();
    public ArrayList<String> finalDEETS = new ArrayList<>();
    public int i = 0;
    public SaveFileRead(String fileName){

        //This is a variable

        try{
            //Reads all lines of file and inserts into an array
            int i = 1;
            File fileToRead = new File(fileName);
            Scanner fileReader = new Scanner(fileToRead);
            while(fileReader.hasNextLine()){
                //this might be a variable?
                String currentData = fileReader.nextLine();
                theDEETS.add(currentData);

            }
            fileReader.close();
            //String should be split here
            for(int j = 0;j<theDEETS.size(); j++) {
                String currentIterationSplit = theDEETS.get(j);
                String[] parts = currentIterationSplit.split("/");
                String part1 = parts[0];
                String part2 = parts[1];
                String part3 = parts[2];
                finalDEETS.add(part1);
                finalDEETS.add(part2);
                finalDEETS.add(part3);
            }
            System.out.println(theDEETS);
            System.out.println(finalDEETS);

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