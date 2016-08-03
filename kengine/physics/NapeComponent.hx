package kengine.physics;

import kengine.Component;
import kha.math.Vector2;
import nape.phys.Body;
import nape.space.Space;

class NapeComponent extends Component
{
	public var body : Body;
	
	public function new(body: Body) 
	{
		super();
		this.body = body;
	}
	
	override public function update()
	{
		super.update();
		owner.pos.x = body.position.x;
		owner.pos.y = body.position.y;
		owner.rotation = MathTools.toDegrees(body.rotation);
	}
	
	override public function onAdded() 
	{
		super.onAdded();
		if (body.compound == null) // check if we are in a compound to remove the right space
		{
			// remove  the body from the space because static objects 
			// cannot be moved while inside one
			var tmpSpace = body.space;
			body.space = null;
			body.position.setxy(owner.worldPos.x, owner.worldPos.y);
			body.rotation = MathTools.toRadians(owner.rotation);
			body.space = tmpSpace;
		}
		else
		{
			var tmpSpace = body.compound.space;
			body.compound.space = null;
			body.position.setxy(owner.worldPos.x, owner.worldPos.y);
			body.rotation = MathTools.toRadians(owner.rotation);
			body.compound.space = tmpSpace;
		}
	}
	
}