package kengine.input;
import kha.Framebuffer;
import kha.Assets;
import kha.Font;

class Gamepad
{
	
	public var axis:Array<Float> = new Array();
	public var buttons:Array<Float> = new Array();

	public function new(n:Int)
	{
		kha.input.Gamepad.get(n).notify(onGamepadAxis,onButton);
	}
	
	private function onGamepadAxis(axis:Int, value:Float):Void
	{
		this.axis[axis]=value;
	}
	
	private function onButton(btn:Int, value:Float):Void
	{
		this.buttons[btn]=value;
	}
	
	public function renderDebug(framebuffer:Framebuffer, font:Font) 
	{
		var g = framebuffer.g2;
		g.begin();
		trace(Assets.fonts.OpenSans);
		g.font = font;
		g.fontSize = 48;
		for(i in 0...axis.length)
		{
			g.drawString('Axis $i:  ${axis[i]}',10,35*i);
		}

				for(i in 0...axis.length)
		{
			g.drawString('Button $i:  ${buttons[i]}',510,40*i);
		}
		
		g.end();
	}
	
}