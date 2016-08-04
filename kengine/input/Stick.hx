package kengine.input;

import kha.math.Vector2;

using kengine.MathTools;

/**
 * ...
 * @author 
 */

@:allow(kengine.input.Gamepad)
class Stick
{

	private var raw:Vector2 = new Vector2();
	
	public var value(get, null):Vector2 = new Vector2();
	
	public var deadZone:Vector2 = new Vector2(0.05, 0.05);
	
	public function new() 
	{
		
	}
	

	private function setAxis(axis:Int,v:Float)
	{
		if (axis == 0)
		{
			raw.x = Math.abs(v) > deadZone.x ? v : 0;
		}else if (axis ==1)
		{
			raw.y = Math.abs(v) > deadZone.y ? v : 0;
		}
		return value;
	}
	
	
	public function get_value():Vector2
	{
		return raw; //should maybe limit it
	}
	
}