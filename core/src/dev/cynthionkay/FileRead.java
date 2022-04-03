package dev.cynthionkay;
import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;
//Please dont read this it is a travesty of justice
public class FileRead {


    public String theDEETS[];

    public FileRead(String fileName){
        
        //This is a variable
        String theDEETS[] = new String[0];
       try{

            File fileToRead = new File(fileName);
            Scanner fileReader = new Scanner(fileToRead);
            while(fileReader.hasNextLine()){
                //this might be a variable??
                String arrNew[] = new String[theDEETS.length + 1];
                String currentData = fileReader.nextLine();
                int i;
                for(i = 0; i < theDEETS.length; i++) {
                    arrNew[i] = theDEETS[i];
                }
                arrNew[i] = currentData;

            }
             
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