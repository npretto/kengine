package;

import kengine.MathTools;
import kengine.Scene;
import kengine.graphics.ImageSprite;
import kengine.Entity;
import kha.Assets;
import kha.math.Vector2;
import kengine.App;

/**
 * ...
 * @author Alessandro Bertoldi
 */
class ImageSpriteSample extends Scene
{

	public function new() 
	{
		super();
		Assets.loadEverything(assetsLoaded);
	}
	
	var entity = new Entity();
	var sprite : ImageSprite;
	var entity2 = new Entity();
	var sprite2 : ImageSprite;
	private function assetsLoaded()
	{
		var image = Assets.images.playerShip;
		entity.name = "sprite entity";
		sprite = new ImageSprite(image);
		entity.pos.x = 200;
		entity.pos.y = 200;
		sprite.offset = new Vector2(sprite.size.x / 2, sprite.size.y / 2);
		entity.addComponent(sprite);
		addChild(entity);
		
		entity2.name = "sprite entity 2";
		sprite2 = new ImageSprite(image);
		entity2.pos.x = 400;
		entity2.pos.y = 200;
		//sprite2.offset = new Vector2(50, 50);
		entity2.rotation = 90;
		entity2.addComponent(sprite2);
		addChild(entity2);
	}
	
	override public function update() 
	{
		super.update();
		
		entity.rotation += App.dt * 30;
	}
	
}