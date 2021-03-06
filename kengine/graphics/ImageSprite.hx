package kengine.graphics;

import kengine.Component;
import kengine.Entity;
import kha.Color;
import kha.Framebuffer;
import kha.Image;
import kha.Scaler;
import kha.math.FastMatrix3;
import kha.math.Vector2;

class ImageSprite extends Drawable
{	
	public function new(image: Image, offset: Vector2 = null, flipX: Bool = false, filpY: Bool = false, scale: Vector2 = null) 
	{
		super();
		this.image = image;
		if (offset == null) this.offset = new Vector2(0, 0);
		if (scale == null) this.scale = new Vector2(1, 1);
	}
	
	override public function render(frameBuffer:Framebuffer) 
	{
		super.render(frameBuffer);
		frameBuffer.g2.color = Color.White;
		// draw the image scaled
		var worldScale = this.worldScale; //cache
		frameBuffer.g2.drawScaledImage(	image,
										owner.worldPos.x - (offset.x * worldScale.x), 
										owner.worldPos.y - (offset.y * worldScale.y),
										size.x * worldScale.x,
										size.y * worldScale.y);
	}
	
	override public function get_size() : Vector2
	{
		return new Vector2(image.width, image.height);
	}
}