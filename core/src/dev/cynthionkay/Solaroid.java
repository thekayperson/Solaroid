package dev.cynthionkay;

import com.badlogic.gdx.ApplicationAdapter;
import com.badlogic.gdx.graphics.Texture;
import com.badlogic.gdx.graphics.g2d.SpriteBatch;
import com.badlogic.gdx.utils.ScreenUtils;


public class Solaroid extends ApplicationAdapter {
	SpriteBatch batch;
	Texture grass;
	Texture water;
	FileRead readFile = new FileRead("file.txt");
	int x = Integer.parseInt(readFile.theDEETS.get(0));
	int y = Integer.parseInt(readFile.theDEETS.get(1));
	int value = 0;
	int c = 0;

	@Override
	public void create() {
		batch = new SpriteBatch();
		grass = new Texture("grass.png");
		water = new Texture("water.png");
		System.out.println(readFile.theDEETS + "sad");
	}

	@Override
	public void render() {
		ScreenUtils.clear(1, 1, 1, 1);
		batch.begin();
		batch.draw(grass, x, y);
		batch.end();

	}
	@Override
	public void dispose () {
		batch.dispose();
		grass.dispose();
		water.dispose();
	}
}