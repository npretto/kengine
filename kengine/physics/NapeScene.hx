package kengine.physics;

import kengine.Scene;
import nape.geom.Vec2;
import nape.space.Space;

class NapeScene extends Scene
{
	public var space: Space;
	public var pausedPhysics:Bool = false;
	
	public function new() 
	{
		super();
		this.space = new Space();
	}
	
	override public function update()
	{
		super.update();
		if (!pausedPhysics){
			space.step(App.dt);
		}
	}
	
}