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
	@Override
	public void create() {
		batch = new SpriteBatch();
		grass = new Texture("grass.png");
		water = new Texture("water.png");
		System.out.println(readFile.theDEETS);

	}

	@Override
	public void render() {
		int DEETSValue = 0;
		batch.begin();
		for(int i = 0; i<readFile.theDEETS.size() / 2; i++){
			int x = Integer.parseInt(readFile.theDEETS.get(DEETSValue));
			DEETSValue += 1;
			int y = Integer.parseInt(readFile.theDEETS.get(DEETSValue));
			batch.draw(grass, x, y);
			DEETSValue += 1;
		}

		ScreenUtils.clear(1, 1, 1, 1);


		batch.end();

	}
	@Override
	public void dispose () {
		batch.dispose();
		grass.dispose();
		water.dispose();
	}
}