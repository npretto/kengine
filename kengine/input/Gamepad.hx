package kengine.input;
import kengine.input.Stick;
import kha.Color;
import kha.Framebuffer;
import kha.Assets;
import kha.Font;
import kha.graphics2.Graphics;

using kha.graphics2.GraphicsExtension;

class Gamepad
{
	
	//public var axis:Array<Button> = new Array();
	public var buttons:Array<Float> = new Array();
	public var leftStick:Stick;
	public var rightStick:Stick;
	public var invertAxis:Bool = false;

	public function new(?n:Int=0)
	{
		leftStick = new Stick();
		rightStick = new Stick();
		kha.input.Gamepad.get(n).notify(onGamepadAxis,onButton);
	}
	
	private function onGamepadAxis(axis:Int, value:Float):Void
	{
		switch(axis)
		{
			case 0:
				leftStick.setAxis(0,value);
			case 1:
				leftStick.setAxis(1,invertAxis ? - value : value);
			case 2:
				rightStick.setAxis(0,value);
			case 3:
				rightStick.setAxis(1,invertAxis ? - value : value);
		}
	}
	
	private function onButton(btn:Int, value:Float):Void
	{
		this.buttons[btn]=value;
	}
	
	public function renderDebug(framebuffer:Framebuffer, font:Font) 
	{
		var g = framebuffer.g2;
		g.begin();
		g.font = font;
		g.fontSize = 48;
		
		drawStick(framebuffer.g2,leftStick, 120, 300, 50);
		drawStick(framebuffer.g2,rightStick, 250, 300, 50);

		for(i in 0...buttons.length)
		{
			g.drawString('Button $i:  ${buttons[i]}',510,40*i);
		}
		
		g.end();
	}
	
	function drawStick(g2:Graphics, stick:Stick, cx:Float, cy:Float, r:Float) 
	{
		g2.drawCircle(cx, cy, r);
		g2.color = Color.Blue;
		g2.fillCircle(cx + stick.value.x * r, cy - stick.value.y * r, r/3);
		g2.color = Color.White;
		g2.drawString('(${(""+stick.value.x).substring(0,4)},${(""+stick.value.y).substring(0,4)})', cx - r, cy + r + 10);
	}
	

	
}