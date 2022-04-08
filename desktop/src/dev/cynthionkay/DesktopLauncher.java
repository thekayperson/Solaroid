package dev.cynthionkay;

import com.badlogic.gdx.backends.lwjgl3.Lwjgl3Application;
import com.badlogic.gdx.backends.lwjgl3.Lwjgl3ApplicationConfiguration;
import dev.cynthionkay.Solaroid;
import dev.cynthionkay.utils.StandardFileRead;

import java.util.ArrayList;
import java.util.Random;

// Please note that on macOS your application needs to be started with the -XstartOnFirstThread JVM argument
public class DesktopLauncher {
	public static void main (String[] arg) {

		Lwjgl3ApplicationConfiguration config = new Lwjgl3ApplicationConfiguration();

		//should load in mods and stuff here probably beffore any files are actually used lol

		config.setWindowIcon("Ui/Icons/logoalt.png");

		//reaf from file convert to array and append it to the end of the title
		StandardFileRead fileRead = new StandardFileRead("FunkyMessages.txt");
		ArrayList<String> enhancedMessages = fileRead.theDEETS;
		String[] messages = enhancedMessages.toArray(new String[0]);

		Random r = new Random();
		int low = 0;
		int high = messages.length;

		config.setTitle("Solaroid: " + messages[r.nextInt(high-low) + low]);

		//other configuration settings
		config.useVsync(true);
		config.setForegroundFPS(60);

		new Lwjgl3Application(new Solaroid(), config);
		
	}
}
