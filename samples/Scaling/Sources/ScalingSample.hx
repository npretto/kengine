package;
import kengine.App;
import kengine.Entity;
import kengine.Scene;
import kengine.graphics.ImageSprite;
import kha.Assets;
import kha.math.Vector2;
import motion.Actuate;
import motion.easing.Linear;

/**
 * ...
 * @author 
 */
class ScalingSample extends Scene
{

	var ship:Entity;
	
	public function new() 
	{
		super();
		ship = new Entity().addComponent(new ImageSprite(Assets.images.enemyShip).centerOffset());
		addChild(ship);
		ship.pos = new Vector2(400, 300);
		
		var companion1 = createCompanion();
		companion1.pos.x = 130;
		var companion2 = createCompanion();
		companion2.pos.x = -130;
		
		ship.addChild(companion1);
		ship.addChild(companion2);
		
		Actuate.tween(ship.scale, 1, {x : 2, y : 2}).repeat().reflect().ease(Linear.easeNone);
	}
	
	override public function update() 
	{
		super.update();
		ship.rotation += 30 * App.dt;
	}
	
	
	private function createCompanion():Entity
	{
		var companion = new Entity().addComponent(new ImageSprite(Assets.images.playerShip).centerOffset());
		
		var bullet1 = createBullet();
		bullet1.pos.x = 50;
		bullet1.pos.y = -30;
		var bullet2 = createBullet();
		bullet2.pos.x = -50;
		bullet2.pos.y = -70;

		companion.addChild(bullet1);
		companion.addChild(bullet2);
		return companion;
	}
	
	private function createBullet():Entity
	{
		return new Entity().addComponent(new ImageSprite(Assets.images.bullet).centerOffset());
	}
	
}