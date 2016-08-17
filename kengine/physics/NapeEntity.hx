package kengine.physics;

import kengine.Entity;
import kha.math.Vector2;
import nape.phys.Body;
import nape.space.Space;

class NapeEntity extends Entity
{

	public var body : Body;
	public var space : Space;

	public function new(body : Body, space : Space) 
	{
		super();
		this.body = body;
		space.bodies.add(this.body);
	}
	
	override public function update()
	{
		super.update();
		this.pos.x = body.position.x;
		this.pos.y = body.position.y;
		this.rotation = MathTools.toDegrees(body.rotation);
	}

	override public function set_pos(p : Vector2):Vector2
	{
		this.pos = p;

		// remove  the body from the space because static objects 
		// cannot be moved while inside one
		if (body.compound == null) // check if we are in a compound to remove the right space
		{
			// remove  the body from the space because static objects 
			// cannot be moved while inside one
			var tmpSpace = body.space;
			body.space = null;
			body.position.setxy(this.worldPos.x, this.worldPos.y);
			body.space = tmpSpace;
		}
		else
		{
			var tmpSpace = body.compound.space;
			body.compound.space = null;
			body.position.setxy(this.worldPos.x, this.worldPos.y);
			body.compound.space = tmpSpace;
		}

		return this.pos;
	}

	override public function get_rotation():Float
	{
		return this.rotation;
	}

	override public function set_rotation(r : Float):Float
	{
	    this.rotation = r;
	    
	    if (body.compound == null) // check if we are in a compound to remove the right space
		{
			// remove  the body from the space because static objects 
			// cannot be moved while inside one
			var tmpSpace = body.space;
			body.space = null;
			body.rotation = MathTools.toRadians(this.rotation);
			body.space = tmpSpace;
		}
		else
		{
			var tmpSpace = body.compound.space;
			body.compound.space = null;
			body.rotation = MathTools.toRadians(this.rotation);
			body.compound.space = tmpSpace;
		}

		return this.rotation;
	}

}