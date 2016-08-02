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
	public function new(image: Image, flipX: Bool = false, flipY: Bool = false, scale: Vector2 = null) 
	{
		super();
		this.image = image;
		if (scale == null) this.scale = new Vector2(1, 1);
	}
	
	override public function render(frameBuffer:Framebuffer) 
	{
		super.render(frameBuffer);

		// reset the transformation matrix, that will be used by drawImage
		frameBuffer.g2.transformation = FastMatrix3.translation(0, 0);
		// rotation
		frameBuffer.g2.rotate(owner.rotation, owner.worldPos.x + size.x/2 + owner.rotationCenter.x , owner.worldPos.y + size.y/2 + owner.rotationCenter.y);
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