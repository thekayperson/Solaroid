package dev.cynthionkay;

import com.badlogic.gdx.ApplicationAdapter;
import com.badlogic.gdx.Gdx;
import com.badlogic.gdx.graphics.Cursor;
import com.badlogic.gdx.graphics.Pixmap;
import com.badlogic.gdx.graphics.Texture;
import com.badlogic.gdx.graphics.g2d.SpriteBatch;
import com.badlogic.gdx.utils.ScreenUtils;

import java.io.FileNotFoundException;


public class Solaroid extends ApplicationAdapter {


	SpriteBatch batch;
	Texture grass;
	Texture water;
	Texture sand;
	SaveFileRead saveFileRead = new SaveFileRead("save.txt");
	@Override
	public void create() {

		batch = new SpriteBatch();
		grass = new Texture("grass.png");
		water = new Texture("water.png");
		sand = new Texture("sand.png");

	}

	@Override
	public void render() {


		batch.begin();
		int finalDeetsValue = 0;
		for(int i = 0; i<saveFileRead.theDEETS.size(); i++){

			int x = Integer.parseInt(saveFileRead.finalDEETS.get(finalDeetsValue));
			finalDeetsValue += 1;
			int y = Integer.parseInt(saveFileRead.finalDEETS.get(finalDeetsValue));
			finalDeetsValue += 1;
			int blockType = Integer.parseInt(saveFileRead.finalDEETS.get(finalDeetsValue));
			finalDeetsValue += 1;
			if(blockType == 1){batch.draw(grass, x, y);}
			else if(blockType == 2){batch.draw(water, x, y);}
			else if(blockType == 3){batch.draw(sand, x, y);}
			else{System.out.println("you done and fucked it mate");}
		}

		ScreenUtils.clear(1, 1, 1, 1);
		batch.end();

		//Custom mouse cursor moment
		Pixmap cursorMap = new Pixmap(Gdx.files.internal("cursor_1.png"));
		int xHotSpot = 8;
		int yHotSpot = 27;
		Cursor cursor = Gdx.graphics.newCursor(cursorMap, xHotSpot, yHotSpot);
		Gdx.graphics.setCursor(cursor);
		cursorMap.dispose();
	}
	@Override
	public void dispose () {

		batch.dispose();
		grass.dispose();
		water.dispose();
	}

}