package dev.cynthionkay;

import com.badlogic.gdx.backends.lwjgl3.Lwjgl3Application;
import com.badlogic.gdx.backends.lwjgl3.Lwjgl3ApplicationConfiguration;
import dev.cynthionkay.Solaroid;

import java.io.IOException;
import java.lang.management.ManagementFactory;
import java.util.List;
import java.util.Random;

// Please note that on macOS your application needs to be started with the -XstartOnFirstThread JVM argument
public class DesktopLauncher {
	public static void main (String[] arg) {

		Lwjgl3ApplicationConfiguration config = new Lwjgl3ApplicationConfiguration();

		String[] messages = {"Kinda Cringe Ngl", "A Sad Game", "For People Without A Life", "Just No", "Imagine having the imagination to write these..", "You did this.", "Why are we here?", "Skill issue.", "You really think you can do this?", "oh you thought", "why do i even bother", "w", "'1' + '1' = '11'"};

		Random r = new Random();
		int low = 0;
		int high = messages.length;

		config.setTitle("Solaroid: " + messages[r.nextInt(high-low) + low]);
		config.setWindowIcon("");

		config.useVsync(true);
		config.setForegroundFPS(60);

		List<String> args = ManagementFactory.getRuntimeMXBean().getInputArguments();
		System.out.println("Runtime Arguments: " + args);

		String Op = System.getProperty("os.name");
		System.out.println("Application Started Using: " + Op);

		if (Op.equals("Mac OS X")){

			//Mac stuff here
			System.out.println("Macs are kinda cringe ngl");

			if (!args.contains("-XstartOnFirstThread")) {

				System.out.println("look now i need to kill myself to care for your special needs :(");

				String argsS = "";

				for (String s : args) {

					argsS = " " + s;

				}

				Runtime runtime = Runtime.getRuntime();

				try {
					Process proc = runtime.exec("java -jar Solaroid.jar " + "-XstartOnFirstThread" + argsS);
				} catch (IOException e) {
					e.printStackTrace();
				}

				System.exit(0);

			}


		}

		if (Op.equals("Windows 10")){

			//Windows stuff here
			System.out.println("Imagine Michaelsoft Binbows 10");

		}

		if (Op.equals("Linux")){

			//Linux stuff here
			System.out.println("Application Accepted!");

		}

		new Lwjgl3Application(new Solaroid(), config);

	}
}
