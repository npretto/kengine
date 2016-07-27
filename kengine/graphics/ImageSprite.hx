package kengine.graphics;

import kengine.Component;
import kengine.Entity;
import kha.Framebuffer;
import kha.Image;
import kha.Scaler;
import kha.math.FastMatrix3;
import kha.math.Vector2;

/**
 * ...
 * @author Alessandro Bertoldi
 */
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

		// reset the transformation matrix, that will be used by drawImage
		//frameBuffer.g2.transformation = FastMatrix3.translation(offset.x, offset.y);
		frameBuffer.g2.transformation = FastMatrix3.translation(0, 0);
		// rotation
		frameBuffer.g2.rotate(owner.rotation, owner.worldPos.x + size.x/2, owner.worldPos.y + size.y/2);
		
		// draw the image scaled
		frameBuffer.g2.drawScaledImage(image, owner.worldPos.x, owner.worldPos.y, size.x * scale.x, size.y * scale.y);
	}
	
	override public function get_size() : Vector2
	{
		return new Vector2(image.width, image.height);
	}
	
	override public function get_realSize() : Vector2
	{
		return new Vector2(image.realWidth, image.realHeight);
	}
}