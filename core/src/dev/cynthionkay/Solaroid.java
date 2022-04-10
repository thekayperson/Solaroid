package dev.cynthionkay;

import com.badlogic.gdx.ApplicationAdapter;
import com.badlogic.gdx.Gdx;
import com.badlogic.gdx.graphics.Texture;
import com.badlogic.gdx.graphics.g2d.SpriteBatch;
import dev.cynthionkay.generation.PerlinNoise;
import com.badlogic.gdx.graphics.GL20;
import dev.cynthionkay.save.Save;

public class Solaroid extends ApplicationAdapter {

	public SpriteBatch batch;
	public Texture texture;

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



		batch.end();
	}


}