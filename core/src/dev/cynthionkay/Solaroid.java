package dev.cynthionkay;

import com.badlogic.gdx.ApplicationAdapter;
import com.badlogic.gdx.Gdx;
import com.badlogic.gdx.graphics.Cursor;
import com.badlogic.gdx.graphics.Pixmap;
import com.badlogic.gdx.graphics.Texture;
import com.badlogic.gdx.graphics.g2d.SpriteBatch;
import com.badlogic.gdx.utils.ScreenUtils;


public class Solaroid extends ApplicationAdapter {


	SpriteBatch batch;
	Texture grass;
	Texture water;
	Texture sand;
	SaveFileRead readFile = new SaveFileRead("file.txt");
	@Override
	public void create() {

		batch = new SpriteBatch();
		grass = new Texture("grass.png");
		water = new Texture("water.png");
		sand = new Texture("sand.png");

	}

	@Override
	public void render() {

		int DEETSValue = 0;
		batch.begin();
		for(int i = 0; i<readFile.finalDEETS.size() / 3; i++){
			int x = Integer.parseInt(readFile.finalDEETS.get(DEETSValue));
			DEETSValue += 1;
			int y = Integer.parseInt(readFile.finalDEETS.get(DEETSValue));
			DEETSValue += 1;
			int blockType = Integer.parseInt(readFile.finalDEETS.get(DEETSValue));
			DEETSValue += 1;
			if(blockType == 1){batch.draw(grass, x, y);}
			else if(blockType == 2){batch.draw(water, x, y);}
			else if(blockType == 3){batch.draw(sand, x, y);}
		}
		//Custom mouse cursor moment
		Pixmap cursorMap = new Pixmap(Gdx.files.internal("cursor_1.png"));
		int xHotSpot = 8;
		int yHotSpot = 27;
		Cursor cursor = Gdx.graphics.newCursor(cursorMap, xHotSpot, yHotSpot);
		Gdx.graphics.setCursor(cursor);
		cursorMap.dispose();


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