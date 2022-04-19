package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.math.FlxPoint;
import flixel.util.FlxColor;

class Player extends FlxSprite
{
	static inline var SPEED:Float = 200;

	public function new(x:Float = 0, y:Float = 0)
	{
		super(x, y);
		loadGraphic("assets/images/entities/units/rover1/tire.png", false, 32, 32);
		loadGraphic("assets/images/entities/units/rover1/base.png", false, 32, 32);
		loadGraphic("assets/images/entities/units/rover1/gun.png", false, 32, 32);
		setFacingFlip(LEFT, false, false);
		setFacingFlip(RIGHT, true, false);

		drag.x = drag.y = 1600;
	}

	override function update(elapsed:Float)
	{
		super.update(elapsed);
	}
}
