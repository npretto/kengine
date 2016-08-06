package;
import kengine.Scene;
import kengine.input.Button;
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
		for (btn in pad.buttons)
			print(btn);
		for (btn in keyboard.buttons)
			print(btn);
		pad.update();
		keyboard.update();
	}
	
	private inline function print(b:Button) 
	{
		if (b.justPressed)
			trace('${b.name} just got pressed');
		if (b.justReleased)
			trace('${b.name} just got released');
	}
	
	override public function render(framebuffer:Framebuffer) 
	{
		super.render(framebuffer);
		pad.renderDebug(framebuffer, kha.Assets.fonts.OpenSans);
		keyboard.renderDebug(framebuffer, kha.Assets.fonts.OpenSans);
	}
	
}