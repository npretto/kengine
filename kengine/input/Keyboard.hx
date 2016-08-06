package kengine.input;
import kha.Color;
import kha.Font;
import kha.Framebuffer;
import kha.Key;

class Keyboard
{
	public var buttons:Array<DeviceButton>;
	
	public var Q:DeviceButton = new DeviceButton("Q");
	public var W:DeviceButton = new DeviceButton("W");
	public var E:DeviceButton = new DeviceButton("E");
	public var R:DeviceButton = new DeviceButton("R");
	public var T:DeviceButton = new DeviceButton("T");
	public var Y:DeviceButton = new DeviceButton("Y");
	public var U:DeviceButton = new DeviceButton("U");
	public var I:DeviceButton = new DeviceButton("I");
	public var O:DeviceButton = new DeviceButton("O");
	public var P:DeviceButton = new DeviceButton("P");
	public var A:DeviceButton = new DeviceButton("A");
	public var S:DeviceButton = new DeviceButton("S");
	public var D:DeviceButton = new DeviceButton("D");
	public var F:DeviceButton = new DeviceButton("F");
	public var G:DeviceButton = new DeviceButton("G");
	public var H:DeviceButton = new DeviceButton("H");
	public var J:DeviceButton = new DeviceButton("J");
	public var K:DeviceButton = new DeviceButton("K");
	public var L:DeviceButton = new DeviceButton("L");
	public var Z:DeviceButton = new DeviceButton("Z");
	public var X:DeviceButton = new DeviceButton("X");
	public var C:DeviceButton = new DeviceButton("C");
	public var V:DeviceButton = new DeviceButton("V");
	public var B:DeviceButton = new DeviceButton("B");
	public var N:DeviceButton = new DeviceButton("N");
	public var M:DeviceButton = new DeviceButton("M");
	public var BACKSPACE:DeviceButton = new DeviceButton("BACKSPACE");
	public var TAB:DeviceButton = new DeviceButton("TAB");
	public var ENTER:DeviceButton = new DeviceButton("ENTER");
	public var SHIFT:DeviceButton = new DeviceButton("SHIFT");
	public var CTRL:DeviceButton = new DeviceButton("CTRL");
	public var ALT:DeviceButton = new DeviceButton("ALT");
	public var CHAR:DeviceButton = new DeviceButton("CHAR");
	public var ESC:DeviceButton = new DeviceButton("ESC");
	public var DEL:DeviceButton = new DeviceButton("DEL");
	public var UP:DeviceButton = new DeviceButton("UP");
	public var DOWN:DeviceButton = new DeviceButton("DOWN");
	public var LEFT:DeviceButton = new DeviceButton("LEFT");
	public var RIGHT:DeviceButton = new DeviceButton("RIGHT");
	public var BACK:DeviceButton = new DeviceButton("BACK");
	


	public function new(?n:Int=0)
	{
		buttons = [Q, W, E, R, T, Y, U, I, O, P, A, S, D, F, G, H, J, K, L, Z, X, C, V, B, N, M,
					BACKSPACE,TAB,ENTER,SHIFT,CTRL,ALT,CHAR,ESC,DEL,UP,DOWN,LEFT,RIGHT,BACK];
		kha.input.Keyboard.get(n).notify(onDown, onUp);
	}
	
	function onUp(key:Key,char:String) 
	{
		setButton(key, char, false);
	}
	
	function onDown(key:Key,char:String) 
	{
		setButton(key, char, true);
	}
	
	private inline function setButton(key:Key, char:String, down:Bool)
	{
		if (key == Key.CHAR)
		{
			switch(char.toUpperCase())
			{
				case "Q":
					Q.setValue(down);
				case "W":
					W.setValue(down);
				case "E":
					E.setValue(down);
				case "R":
					R.setValue(down);
				case "T":
					T.setValue(down);
				case "Y":
					Y.setValue(down);
				case "U":
					U.setValue(down);
				case "I":
					I.setValue(down);
				case "O":
					O.setValue(down);
				case "P":
					P.setValue(down);
				case "A":
					A.setValue(down);
				case "S":
					S.setValue(down);
				case "D":
					D.setValue(down);
				case "F":
					F.setValue(down);
				case "G":
					G.setValue(down);
				case "H":
					H.setValue(down);
				case "J":
					J.setValue(down);
				case "K":
					K.setValue(down);
				case "L":
					L.setValue(down);
				case "Z":
					Z.setValue(down);
				case "X":
					X.setValue(down);
				case "C":
					C.setValue(down);
				case "V":
					V.setValue(down);
				case "B":
					B.setValue(down);
				case "N":
					N.setValue(down);
				case "M":
					M.setValue(down);
			}
		}else
		{
			switch(key)
			{
				case BACKSPACE:
					BACKSPACE.setValue(down);
				case TAB:
					TAB.setValue(down);
				case ENTER:
					ENTER.setValue(down);
				case SHIFT:
					SHIFT.setValue(down);
				case CTRL:
					CTRL.setValue(down);
				case ALT:
					ALT.setValue(down);
				case CHAR:
					CHAR.setValue(down);
				case ESC:
					ESC.setValue(down);
				case DEL:
					DEL.setValue(down);
				case UP:
					UP.setValue(down);
				case DOWN:
					DOWN.setValue(down);
				case LEFT:
					LEFT.setValue(down);
				case RIGHT:
					RIGHT.setValue(down);
				case BACK:
					BACK.setValue(down);
			}
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

		var i = 0;
		for(btn in buttons)
		{
			g.color = btn.down ? Color.Red : Color.White;
			g.drawString('Button ${btn.name}',400,25*i++);
		}
		
	}
	

	
	public function update()
	{
		for (btn in buttons)
		{
			btn.update();
		}
	}
	
}