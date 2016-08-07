package;
import kengine.Scene;
import kengine.input.Button;
import kengine.input.DeviceButton;
import kengine.input.EitherButton;
import kengine.input.Gamepad;
import kengine.input.Keyboard;
import kha.Color;
import kha.Framebuffer;

/**
 * ...
 * @author 
 */
class TestScene extends Scene
{
	var pad:kengine.input.Gamepad;
	var keyboard:kengine.input.Keyboard;
	var customButton:Button;

	public function new() 
	{
		super();
		pad = Gamepad.get();
		//pad.invertAxis = true;
		keyboard = Keyboard.get();
		
		customButton = new EitherButton("jumpButton", [keyboard.UP, keyboard.W, pad.D_UP]);
	}
	
	override public function update()
	{
		super.update();
		for (btn in pad.buttons)
			print(btn);
		for (btn in keyboard.buttons)
			print(btn);
			
		print(customButton);
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
		
		framebuffer.g2.color = customButton.down ? Color.Red : Color.White;
		framebuffer.g2.drawString(customButton.name, 240, 300);
	}
	
}