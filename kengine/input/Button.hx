package kengine.input;

/**
 * ...
 * @author 
 */
class Button
{
	public var name:String;
	public var down(get, null);
	public var justReleased(get, null);
	public var justPressed(get, null);

	public function new(name:String) 
	{
		this.name = name;
		
	}
	
}