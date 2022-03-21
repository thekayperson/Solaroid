package dev.cynthionkay;

import com.badlogic.gdx.ApplicationAdapter;
import com.badlogic.gdx.graphics.Texture;
import com.badlogic.gdx.graphics.g2d.SpriteBatch;
import com.badlogic.gdx.utils.ScreenUtils;

public class Solaroid extends ApplicationAdapter {
	SpriteBatch batch;
	Texture img;
	int x = 0;
	int y = 0;

	@Override
	public void create() {
		batch = new SpriteBatch();
		img = new Texture("green.png");
	}

	@Override
	public void render() {
		ScreenUtils.clear(0.98f,0.01f,0.56f,0);
		batch.begin();

		//taking so long to load i cant test the app

		/* while (x != 1000) {
			for (int i = 0; i < 10; i++) {
				batch.draw(img, x, y);
				y += 32;

			}
			x += 32;
		} */
			x = 0;
			y = 0;
			batch.end();


	}
	@Override
	public void dispose () {
		batch.dispose();
		img.dispose();
	}
}