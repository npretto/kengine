package kengine.input;

/**
 * ...
 * @author 
 */
interface Button
{
	
	public var name:String;
	/**
	 * if the button is currently down
	 */
	@:isVar
	public var down(get, null):Bool;
	/**
	 * if the button has been released since the last `update()`
	 */
	@:isVar
	public var justReleased(get, null):Bool;
	/**
	 * if the button has been released since the last `update()`
	 */
	@:isVar
	public var justPressed(get, null):Bool;
	
}