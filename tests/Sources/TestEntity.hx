package;

import haxe.unit.TestCase;
import kengine.Entity;
import kha.math.Vector2;

/**
 * ...
 * @author ...
 */
class TestEntity extends TestCase
{

	public function testPositionChild():Void
	{
		var father = new Entity();
		father.pos = new Vector2(50, 50);
		var child = new Entity();
		child.pos = new Vector2(100, 100);
		father.addChild(child);
		assertEquals(new Vector2(150, 150).x, child.worldPos.x);
		assertEquals(new Vector2(150, 150).y, child.worldPos.y);
	}
	
}