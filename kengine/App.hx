package kengine;

import kha.Color;
import kha.Framebuffer;
import kha.Scheduler;
import kha.System;

/**
 * ...
 * @author npretto
 */
class App
{

	var scene:Scene;
	@:isVar public static var dt(default, null):Float;
	
	public function new(scene:Scene,updatePerSeconds:Int) 
	{
		this.scene = scene;
		System.notifyOnRender(render);
		dt = 1 / updatePerSeconds;
		Scheduler.addTimeTask(update, 0, dt);
	}

	function update(): Void {
		scene.update();
	}

	function render(framebuffer: Framebuffer): Void {
		framebuffer.g2.begin(true, Color.Black);
		scene.render(framebuffer);
		framebuffer.g2.end();
		
	}
	
	
}