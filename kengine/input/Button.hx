package kengine.input;

/**
 * ...
 * @author 
 */
class Button
{
	var nextJustPressed:Bool;
	var nextJustReleased:Bool;
	public var name:String;
	/**
	 * if the button is currently down
	 */
	@:isVar
	public var down(default, null):Bool;
	/**
	 * if the button has been released since the last `update()`
	 */
	@:isVar
	public var justReleased(default, null):Bool;
	/**
	 * if the button has been released since the last `update()`
	 */
	@:isVar
	public var justPressed(default, null):Bool;

	public function new(name:String) 
	{
		this.name = name;
		down = false;
	}
	
	/**
	 * This private method is used by gamepad to change the value of `down` without making the variable writable
	 */
	@:allow(kengine.input)
	private function setValue(v:Bool)
	{
		if (down == false && v == true)
		{
			nextJustPressed = true;
		}else if (down == true && v == false)
		{
			nextJustReleased = true;
		}
		down = v;
	}
	
	/**
	 * this function should be called right after the update() function of your game, it sets justPressed and justReleased, i plan on doing this automatically
	 */
	public function update():Void
	{	
		justPressed = nextJustPressed;
		nextJustPressed = false;
		
		justReleased = nextJustReleased;
		nextJustReleased = false;
	}
}