package;

import flixel.FlxG;
import flixel.FlxState;
import flixel.ui.FlxButton;

class MenuState extends FlxState
{
	var playButton:FlxButton;

	override public function create()
	{
		playButton = new FlxButton(10, 10, "Play", clickPlay);
		add(playButton);
		playButton.screenCenter();
		super.create();
	}

	override public function update(elapsed:Float)
	{
		super.update(elapsed);
	}

	function clickPlay()
	{
		FlxG.switchState(new PlayState());
	}
}
