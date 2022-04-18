package tile;

import flixel.FlxSprite;


class Tile extends FlxSprite{

    public function new(posX:Int, posY:Int, sizeX:Int, sizeY:Int, path:String, animated:Bool){

        super(posX, posY);
        loadGraphic(path, animated, sizeX, sizeY);


    }

}