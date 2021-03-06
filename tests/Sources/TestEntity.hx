package;

import kengine.Entity;
import kha.math.Vector2;
import utest.Assert;

/**
 * ...
 * @author ...
 */
class TestEntity {
	
	public function new() {};

	public function testPositionChild():Void
	{
		var father = new Entity();
		father.pos = new Vector2(50, 50);
		var child = new Entity();
		child.pos = new Vector2(100, 100);
		father.addChild(child);
		Assert.same(new Vector2(150, 150), child.worldPos);

	}
	
	public function testPositionWithRotation():Void
	{
		var father = new Entity().setName("father");
		father.pos = new Vector2(0, 0);
		var child = new Entity().setName("child");
		//child is "rotated" by 45 and with an offset of 100
		child.pos = new Vector2(1, 1);
		child.pos.normalize();
		child.pos = child.pos.mult(100);
	
		//rotate again 45 to get 90
		father.rotation = 45;
		father.addChild(child);
		Assert.same(new Vector2(0, 100), child.worldPos);
		
		
		var father = new Entity().setName("father");
		father.pos = new Vector2(0, 0);
		father.rotation = 0;
		
		var child = new Entity().setName("child");
		child.pos = new Vector2(100, 0);
		father.rotation = 45;
		child.rotation = 674;
		
		father.addChild(child);
		Assert.same(new Vector2(100 / Math.sqrt(2), 100 / Math.sqrt(2)), child.worldPos);
		
		
	}
	
	public function testScalingEntities():Void
	{
		var parent = new Entity();
		var child = new Entity();
		var grandChild = new Entity();
		
		parent.addChild(child);
		child.addChild(grandChild);
		
		parent.pos = new Vector2(100, 100);
		parent.scale = new Vector2(0.5, 0.25);
		
		child.pos = new Vector2(200, 400);
		child.scale = new Vector2(0.25, 0.125);
		
		grandChild.pos = new Vector2(400*2, 800*4);
		
		Assert.same(new Vector2(300, 300), grandChild.worldPos);
	}
	
}