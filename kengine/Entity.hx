package kengine;
import kengine.Component;
import kha.Framebuffer;
import kha.math.Vector2;

/**
 * ...
 * @author npretto
 */
class Entity
{
	
	var children:List<Entity> = new List();
	var components : List<Component> = new List();
	var parent:Entity = null;
	public var pos:Vector2 = new Vector2();
	public var worldPos(get, null):Vector2;
	public var rotation : Float; // degrees
	public var rotationCenter : Vector2 = new Vector2(0, 0);
	
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
	
	public function addComponent(c : Component):Entity
	{
		components.add(c);
		c.owner = this;
		c.onAdded();
		return this;
	}
	
	public function update()
	{
		for (c in components)
		{
			c.update();
		}
		
		for (e in children)
		{
			e.update();
		}
	}
	
	public function render(framebuffer:Framebuffer)
	{
		for (c in components)
		{
			c.render(framebuffer);
		}
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