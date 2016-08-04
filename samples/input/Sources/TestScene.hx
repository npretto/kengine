package;
import kengine.Scene;
import kengine.input.Gamepad;
import kha.Framebuffer;

/**
 * ...
 * @author 
 */
class TestScene extends Scene
{
	var pad:kengine.input.Gamepad;

	public function new() 
	{
		super();
		pad = new Gamepad(0);
		//pad.invertAxis = true;
	}
	
	override public function render(framebuffer:Framebuffer) 
	{
		super.render(framebuffer);
		pad.renderDebug(framebuffer, kha.Assets.fonts.OpenSans);
	}
	
}