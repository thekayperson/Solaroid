package dev.cynthionkay;

import com.badlogic.gdx.ApplicationAdapter;
import com.badlogic.gdx.graphics.Texture;
import com.badlogic.gdx.graphics.g2d.SpriteBatch;
import com.badlogic.gdx.utils.ScreenUtils;

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
	}

	@Override
	public void render() {
		ScreenUtils.clear(1, 1, 1, 1);
		batch.begin();
		Random r = new Random();

		for(int ii=0; ii<1000; ii++) {
			for (int i = 0; i < 20; i++) {

				if(value == 1) {
					batch.draw(grass, x, y);
				}
				if(value == 2) {
					batch.draw(water, x, y);
				}
				y += 32;

			}
			y = 0;
			x += 32;
			value = r.nextInt(2);

		}
		x = 0;
		y = 0;
		batch.end();

	}
	@Override
	public void dispose () {
		batch.dispose();
		grass.dispose();
		water.dispose();
	}
}