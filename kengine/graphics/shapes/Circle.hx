package kengine.graphics.shapes;

import kengine.graphics.Drawable;
import kha.Color;
import kha.Framebuffer;
import kha.math.Vector2;

using kha.graphics2.GraphicsExtension;


class Circle extends Drawable
{
	public var color:Color;
	public var radius:Float;

	public function new(radius:Float,color:Color) 
	{
		super();
		this.color = color;
		this.radius = radius;
	}
	
	override public function get_size():Vector2 
	{
		return new Vector2(radius * 2, radius * 2);
	}
	
	override public function render(frameBuffer:Framebuffer) 
	{
		super.render(frameBuffer);
		var g = frameBuffer.g2;
		g.color = color;
		g.fillCircle(owner.worldPos.x - (offset.x * worldScale.x), owner.worldPos.y - (offset.y * worldScale.y), radius * worldScale.x);
		g.color = Color.White;
	}
	
}