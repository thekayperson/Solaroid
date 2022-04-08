package dev.cynthionkay;

import com.badlogic.gdx.ApplicationAdapter;
import com.badlogic.gdx.Gdx;
import com.badlogic.gdx.graphics.Cursor;
import com.badlogic.gdx.graphics.Pixmap;
import com.badlogic.gdx.graphics.Texture;
import com.badlogic.gdx.graphics.g2d.Sprite;
import com.badlogic.gdx.graphics.g2d.SpriteBatch;
import com.badlogic.gdx.maps.MapRenderer;
import com.badlogic.gdx.maps.tiled.*;
import com.badlogic.gdx.scenes.scene2d.ui.Cell;
import com.badlogic.gdx.utils.ScreenUtils;
import dev.cynthionkay.Generation.PerlinNoise;
import dev.cynthionkay.utils.SaveFileRead;
import com.badlogic.gdx.ApplicationAdapter;
import com.badlogic.gdx.Gdx;
import com.badlogic.gdx.Input;
import com.badlogic.gdx.InputProcessor;
import com.badlogic.gdx.graphics.GL20;
import com.badlogic.gdx.graphics.OrthographicCamera;
import com.badlogic.gdx.graphics.Texture;
import com.badlogic.gdx.maps.tiled.TiledMap;
import com.badlogic.gdx.maps.tiled.renderers.OrthogonalTiledMapRenderer;

import java.awt.image.BufferedImage;
import java.security.SecureRandom;

public class Solaroid extends ApplicationAdapter {

	public SpriteBatch batch;
	public Texture texture;

	//ima just keep this here ¯\_(ツ)_/¯
	Cursor SolarCursor = Gdx.graphics.newCursor(new Pixmap(Gdx.files.internal("Ui/Buttons/Cursors/cursor_1.png")), 6, 11);

	@Override
	public void create () {

		batch = new SpriteBatch();
		texture = new Texture("grass.png");

	}

	@Override
	public void render () {

		Gdx.gl.glClearColor(1, 0, 0, 1);
		Gdx.gl.glBlendFunc(GL20.GL_SRC_ALPHA, GL20.GL_ONE_MINUS_SRC_ALPHA);
		Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
		batch.begin();
		batch.draw(texture, 100, 100);
		batch.end();

		PerlinNoise p = new PerlinNoise(1029);
		for(float y = 0; y< 2; y += .01) {
			for(float x = 0; x<2; x += .01)
				System.out.print(p.noise(x, y, 0) + "\t");
			System.out.println();
		}

	}


}