package kengine;
import kha.Framebuffer;
import kha.math.Vector2;

/**
 * ...
 * @author npretto
 */
class Entity
{
	
	var children:List<Entity> = new List();
	var parent:Entity = null;
	var pos:Vector2 = new Vector2();
	var worldPos(get, null):Vector2;
	public var name:String = "";

	public function new() 
	{
		
	}
	
	function onAdded()
	{
		
	}
	
	public function addChild(e:Entity):Entity
	{
		children.add(e);
		e.parent = this;
		e.onAdded();
		return this;
	}
	
	public function update()
	{
		for (e in children)
		{
			e.update();
		}
	}
	
	public function render(framebuffer:Framebuffer)
	{
		for (e in children)
		{
			e.render(framebuffer);
		}
	}
	
		
	private function get_worldPos():Vector2
	{
		if (parent == null)
		{
			return pos;
		}else{
			return parent.worldPos.add(pos);
		}
	}
	
}