package;

import tile.Tile;
import flixel.FlxState;
import flixel.text.FlxText;

class PlayState extends FlxState
{
	var player:Player;
	var grass:Tile;
	override public function create()
	{
		// var text = new FlxText(10, 10, 100, "Bruh");
		// add(text);

		grass = new Tile(20, 20, 16, 16, "assets/images/grass.png", false);
		add(grass);
		//player = new Player(20, 20);
		//add(player);
		
		super.create();
	}

	override public function update(elapsed:Float)
	{
		super.update(elapsed);
	}
}
