package kengine.input;

/**
 * ...
 * @author 
 */
class EitherButton implements Button
{
	public var name:String;

	@:isVar
	public var down(get, null):Bool;
	public var justReleased(get, null):Bool;
	public var justPressed(get, null):Bool;
	var buttons:Array<DeviceButton>;

	public function new(name:String,buttons:Array<DeviceButton>) 
	{
		this.name = name;
		this.buttons = buttons;
	}
	
	private function get_down()
	{
		for (b in buttons)
		{
			if (b.down)
				return true;
		}
		return false;
	}
	
	private function get_justPressed()
	{
		for (b in buttons)
		{
			if (b.justPressed)
				return true;
		}
		return false;
	}
	
	private function get_justReleased()
	{
		for (b in buttons)
		{
			if (b.justReleased)
				return true;
		}
		return false;
	}
}