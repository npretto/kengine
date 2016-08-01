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
		trace("HEI");
		var father = new Entity();
		father.pos = new Vector2(50, 50);
		var child = new Entity();
		child.pos = new Vector2(100, 100);
		father.addChild(child);
		Assert.equals(new Vector2(150, 150).x, child.worldPos.x);
		Assert.equals(new Vector2(150, 151).y, child.worldPos.y);
		Assert.fail("blabla");
	}
	
}