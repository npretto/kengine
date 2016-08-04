package kengine;

import kha.math.Matrix2;
import kha.math.Vector2;

/**
 * ...
 * @author ...
 */
class MathTools
{

	public static function toRadians(degree:Float):Float
	{
		return degree * Math.PI / 180;
	}
	
	public static function toDegrees(rad:Float):Float
	{
		return rad *180 / Math.PI;
	}
	
	public static function rotate(vec:Vector2,degree:Float):Vector2
	{
		var sin = Math.sin(toRadians(degree));
		var cos = Math.cos(toRadians(degree));
		var m = new Matrix2(cos, -sin, sin, cos);
		return m.multvec(vec);
	}
	
	public static inline function normalizedCopy(v:Vector2):Vector2
	{
		var a = new Vector2(v.x, v.y);
		a.normalize();
		return a;
	}
}