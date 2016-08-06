package;
import kengine.Scene;
import kengine.input.Gamepad;
import kengine.input.Keyboard;
import kha.Framebuffer;

/**
 * ...
 * @author 
 */
class TestScene extends Scene
{
	var pad:kengine.input.Gamepad;
	var keyboard:kengine.input.Keyboard;

	public function new() 
	{
		super();
		pad = new Gamepad(0);
		//pad.invertAxis = true;
		keyboard = new Keyboard(0);
	}
	
	override public function update()
	{
		super.update();
		pad.update();
	}
	
	override public function render(framebuffer:Framebuffer) 
	{
		super.render(framebuffer);
		pad.renderDebug(framebuffer, kha.Assets.fonts.OpenSans);
		keyboard.renderDebug(framebuffer, kha.Assets.fonts.OpenSans);
	}
	
}