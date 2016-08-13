package kengine.graphics;
import kengine.Component;
import kha.Framebuffer;
import kha.Image;
import kha.math.FastMatrix3;
import kha.math.Vector2;

/**
 * ...
 * @author Alessandro Bertoldi
 */
class Drawable extends Component
{
	public var offset : Vector2;
	public var flipX : Bool;
	public var flipY : Bool;
	public var scale : Vector2;
	public var worldScale(get, null):Vector2;
	@:isVar
	public var size(get, null) : Vector2;
	var image : Image;
	
	public function new() {
		super();
		size = new Vector2(0, 0);
		offset = new Vector2(0, 0);
		scale = new Vector2(1, 1);
		
	}
	
	public function get_size() : Vector2
	{
		return size;
	}
	
	public function centerOffset()
	{
		this.offset = new Vector2(size.x / 2, size.y / 2);
		return this;
	}
	
	private function get_worldScale():Vector2
	{
		return new Vector2(scale.x * owner.worldScale.x, scale.y * owner.worldScale.y);
	}
	
	override public function render(frameBuffer:Framebuffer) 
	{
		super.render(frameBuffer);
		// reset the transformation matrix, that will be used by drawImage
		//frameBuffer.g2.transformation = FastMatrix3.translation(-offset.x, -offset.y);
		frameBuffer.g2.transformation = FastMatrix3.translation(0, 0);
		// rotation
		frameBuffer.g2.rotate(MathTools.toRadians(owner.worldRotation), owner.worldPos.x, owner.worldPos.y);
		
	}
	
}