package dev.cynthionkay;

import com.badlogic.gdx.backends.lwjgl3.Lwjgl3Application;
import com.badlogic.gdx.backends.lwjgl3.Lwjgl3ApplicationConfiguration;
import dev.cynthionkay.Solaroid;

import java.util.Random;

// Please note that on macOS your application needs to be started with the -XstartOnFirstThread JVM argument
public class DesktopLauncher {
	public static void main (String[] arg) {

		Lwjgl3ApplicationConfiguration config = new Lwjgl3ApplicationConfiguration();

		//the hd ones look bad because of ui scale
		config.setWindowIcon("Ui/Icons/logoalt.png");

		String[] messages = {"Kinda Cringe Ngl", "A Sad Game", "For People Without A Life", "Just No", "Imagine having the imagination to write these..", "You did this.", "Why are we here?", "Skill issue.", "You really think you can do this?", "'>,< Doubles", "^.^ Floats"};

		Random r = new Random();
		int low = 0;
		int high = messages.length;

		config.setTitle("Solaroid: " + messages[r.nextInt(high-low) + low]);

		config.useVsync(true);
		config.setForegroundFPS(60);

		new Lwjgl3Application(new Solaroid(), config);
		
	}
}
