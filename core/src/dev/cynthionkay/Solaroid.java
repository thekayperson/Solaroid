package dev.cynthionkay;

import com.badlogic.gdx.ApplicationAdapter;
import com.badlogic.gdx.graphics.Texture;
import com.badlogic.gdx.graphics.g2d.SpriteBatch;
import com.badlogic.gdx.utils.ScreenUtils;
import dev.cynthionkay.FileRead;
import java.util.Random;

public class Solaroid extends ApplicationAdapter {
	SpriteBatch batch;
	Texture grass;
	Texture water;
	int x = 0;
	int y = 0;
	int value = 0;
	int c = 0;

	@Override
	public void create() {
		batch = new SpriteBatch();
		grass = new Texture("grass.png");
		water = new Texture("water.png");
		FileRead readFile = new FileRead("file.txt");
		System.out.println(readFile.theDEETS[1]);
	}

	@Override
	public void render() {
		ScreenUtils.clear(1, 1, 1, 1);
		batch.begin();
		batch.draw(grass, 100, 100);
		batch.end();

	}
	@Override
	public void dispose () {
		batch.dispose();
		grass.dispose();
		water.dispose();
	}
}