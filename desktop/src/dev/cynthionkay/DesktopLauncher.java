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

		//we should make this like a file at some point
		//yeah we should totally do that except for the fact that i CANNOT BE FUCKING ASKED about it
		//if we do then it could be modded, ill try do it later
		//oh yea
		//TODO
		String[] messages = {"sneaky", "Kinda Cringe Ngl", "A Sad Game", "For People Without A Life", "Just No", "Imagine having the imagination to write these..", "You did this.", "Why are we here?", "Skill issue.", "You really think you can do this?", "'>,< Doubles", "^.^ Floats", "For elite gamers", ">.<", "Powered by java", "photocynthesis", "o-kay'", "Imagine having the imagination to be able to imagine having the imagination to write these..", "bruh", "TODO"};

		Random r = new Random();
		int low = 0;
		int high = messages.length;

		config.setTitle("Solaroid: " + messages[r.nextInt(high-low) + low]);

		config.useVsync(true);
		config.setForegroundFPS(60);

		new Lwjgl3Application(new Solaroid(), config);
		
	}
}
