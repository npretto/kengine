package kengine.input;

/**
 * Maybe not the best name, but I hade to create an interface named Button
 * to allow EitherButton to not wast the space of the @:isVar properties
 */
class DeviceButton implements Button
{
	var nextJustPressed:Bool;
	var nextJustReleased:Bool;
	public var name:String;
	/**
	 * if the button is currently down
	 */
	@:isVar
	public var down(get, null):Bool;
	/**
	 * if the button has been released in between the last two `update()`
	 */
	@:isVar
	public var justReleased(get, null):Bool;
	/**
	 * if the button has been released in between the last two `update()`
	 */
	@:isVar
	public var justPressed(get, null):Bool;

	public function new(name:String) 
	{
		this.name = name;
		down = false;
	}
	
	/**
	 * This private method is used by the gamepads/keyboards to change the value of `down` without making the variable writable
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
	
	
	private function get_down()
	{
		return down;
	}
	
	private function get_justPressed()
	{
		return justPressed;
	}
	
	private function get_justReleased()
	{
		return justReleased;
	}
}