package dev.cynthionkay.utils;
import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Scanner;

// Please don't read this it is a travesty of justice
// At some point i will use this file to make the list of messages into a file but not right now
public class StandardFileRead {

    public ArrayList<String> theDEETS = new ArrayList<String>();

    //ArrayList<String> finalDEETS = new ArrayList<>();

    public int i = 0;
    public StandardFileRead(String fileName){

        //This is a variable
        //this really helped me out ngl

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

            /* this is literally just the save file reader but with some parts commented out for simple file reading

            String should be split here

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
            System.out.println(finalDEETS);
            */
        }

        catch(FileNotFoundException EveryoneCallsTheirExceptionEButImTooCoolForThat){

            System.out.println("lmao fucking dumbass you cant even read a file.");
            EveryoneCallsTheirExceptionEButImTooCoolForThat.printStackTrace();

        }


    }


}