package kengine.input;
import kengine.input.DeviceButton;
import kengine.input.Stick;
import kha.Color;
import kha.Framebuffer;
import kha.Assets;
import kha.Font;
import kha.graphics2.Graphics;

using kha.graphics2.GraphicsExtension;

class Gamepad
{
	public var leftStick:Stick;
	public var rightStick:Stick;
	public var invertAxis:Bool = false;
	
	public var A:DeviceButton = new DeviceButton("A");
	public var B:DeviceButton = new DeviceButton("B");
	public var X:DeviceButton = new DeviceButton("X");
	public var Y:DeviceButton = new DeviceButton("Y");
	public var L1:DeviceButton = new DeviceButton("L1");
	public var R1:DeviceButton = new DeviceButton("R1");
	public var L2:DeviceButton = new DeviceButton("L2");
	public var R2:DeviceButton = new DeviceButton("R2");
	public var BACK:DeviceButton = new DeviceButton("BACK");
	public var START:DeviceButton = new DeviceButton("START");
	public var L3:DeviceButton = new DeviceButton("L3");
	public var R3:DeviceButton = new DeviceButton("R3");
	public var D_UP:DeviceButton = new DeviceButton("D_UP");
	public var D_DOWN:DeviceButton = new DeviceButton("D_DOWN");
	public var D_LEFT:DeviceButton = new DeviceButton("D_LEFT");
	public var D_RIGHT:DeviceButton = new DeviceButton("D_RIGHT");
	public var buttons:Array<DeviceButton>;

	public function new(?n:Int=0)
	{
		buttons = [A, B, X, Y, L1, R1, L2, R2, BACK, START, L3, R3, D_UP, D_DOWN, D_LEFT, D_RIGHT];
		leftStick = new Stick();
		rightStick = new Stick();
		kha.input.Gamepad.get(n).notify(onGamepadAxis, onButton);
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
		switch(btn)
		{
			case 0:
				updateButton(A,value);
			case 1:
				updateButton(B,value);
			case 2:
				updateButton(X,value);
			case 3:
				updateButton(Y,value);
			case 4:
				updateButton(L1,value);
			case 5:
				updateButton(R1,value);
			case 6:
				updateButton(L2,value);
			case 7:
				updateButton(R2,value);
			case 8:
				updateButton(BACK,value);
			case 9:
				updateButton(START,value);
			case 10:
				updateButton(L3,value);
			case 11:
				updateButton(R3,value);
			case 12:
				updateButton(D_UP,value);
			case 13:
				updateButton(D_DOWN,value);
			case 14:
				updateButton(D_LEFT,value);
			case 15:
				updateButton(D_RIGHT,value);
		}
	}
	
	private inline function updateButton(btn:DeviceButton, value:Float) 
	{
		btn.setValue(value > 0.5);
	}
	
	public function renderDebug(framebuffer:Framebuffer, font:Font) 
	{
		var g = framebuffer.g2;
		g.font = font;
		g.fontSize = 24;
		
		drawStick(framebuffer.g2,leftStick, 220, 60, 50);
		drawStick(framebuffer.g2,rightStick, 350, 60, 50);

		var i = 0;
		for(btn in buttons)
		{
			g.color = btn.down ? Color.Red : Color.White;
			g.drawString('Button ${btn.name}',20,25*i++);
		}
	}
	
	function drawStick(g2:Graphics, stick:Stick, cx:Float, cy:Float, r:Float) 
	{
		g2.color = Color.White;
		g2.drawCircle(cx, cy, r);
		g2.color = Color.Blue;
		g2.fillCircle(cx + stick.value.x * r, cy - stick.value.y * r, r/3);
		g2.color = Color.White;
		g2.drawString('(${(""+stick.value.x).substring(0,4)},${(""+stick.value.y).substring(0,4)})', cx - r, cy + r + 10);
	}
	
	public function update()
	{
		//trace("gamepad:update()");
		for (btn in buttons)
		{
			btn.update();
		}
	}
	
}