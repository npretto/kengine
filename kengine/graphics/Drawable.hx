package kengine.graphics;
import kengine.Component;
import kha.Framebuffer;
import kha.Image;
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
	public var size(get, null) : Vector2;
	var image : Image;
	
	public function new() {	super(); }
	
	public function get_size() : Vector2
	{
		return null;
	}
	
	public function get_realSize() : Vector2
	{
		return null;
	}
}