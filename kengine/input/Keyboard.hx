package kengine.input;
import kha.Color;
import kha.Font;
import kha.Framebuffer;
import kha.Key;

class Keyboard
{
	public var buttons:Array<Button>;
	
	public var Q:Button = new Button("Q");
	public var W:Button = new Button("W");
	public var E:Button = new Button("E");
	public var R:Button = new Button("R");
	public var T:Button = new Button("T");
	public var Y:Button = new Button("Y");
	public var U:Button = new Button("U");
	public var I:Button = new Button("I");
	public var O:Button = new Button("O");
	public var P:Button = new Button("P");
	public var A:Button = new Button("A");
	public var S:Button = new Button("S");
	public var D:Button = new Button("D");
	public var F:Button = new Button("F");
	public var G:Button = new Button("G");
	public var H:Button = new Button("H");
	public var J:Button = new Button("J");
	public var K:Button = new Button("K");
	public var L:Button = new Button("L");
	public var Z:Button = new Button("Z");
	public var X:Button = new Button("X");
	public var C:Button = new Button("C");
	public var V:Button = new Button("V");
	public var B:Button = new Button("B");
	public var N:Button = new Button("N");
	public var M:Button = new Button("M");
	public var BACKSPACE:Button = new Button("BACKSPACE");
	public var TAB:Button = new Button("TAB");
	public var ENTER:Button = new Button("ENTER");
	public var SHIFT:Button = new Button("SHIFT");
	public var CTRL:Button = new Button("CTRL");
	public var ALT:Button = new Button("ALT");
	public var CHAR:Button = new Button("CHAR");
	public var ESC:Button = new Button("ESC");
	public var DEL:Button = new Button("DEL");
	public var UP:Button = new Button("UP");
	public var DOWN:Button = new Button("DOWN");
	public var LEFT:Button = new Button("LEFT");
	public var RIGHT:Button = new Button("RIGHT");
	public var BACK:Button = new Button("BACK");
	


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
		
	private inline function updateButton(btn:Button, value:Float) 
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