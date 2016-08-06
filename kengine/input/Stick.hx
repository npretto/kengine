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

	/**
	 * the raw value, where each axis is between -1 and 1
	 */
	public var raw:Vector2 = new Vector2();
	
	/**
	 * "normalized" value, in which the vector is at most 1
	 */
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
		return new Vector2(raw.x * Math.sqrt(1 - 0.5 * Math.pow(raw.y, 2)),
						   raw.y * Math.sqrt(1 - 0.5 * Math.pow(raw.x, 2)));
	}
	
}