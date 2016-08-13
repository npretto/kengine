package kengine.graphics.shapes;

import haxe.ds.Vector;
import kengine.graphics.Drawable;
import kha.Color;
import kha.Framebuffer;
import kha.math.Vector2;

using kha.graphics2.GraphicsExtension;


class Rectangle extends Drawable
{
	public var color:Color;

	public function new(width:Float,height:Float,color:Color) 
	{
		super();
		this.color = color;
		this.size = new Vector2(width, height);
	}
	
	override public function render(frameBuffer:Framebuffer) 
	{
		super.render(frameBuffer);
		var g = frameBuffer.g2;
		g.color = color;
		g.fillRect(	owner.worldPos.x - (offset.x * worldScale.x),
					owner.worldPos.y - (offset.y * worldScale.y),
					size.x*worldScale.x,
					size.y*worldScale.y);
		g.color = Color.White;
	}
	
}