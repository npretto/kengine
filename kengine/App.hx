package kengine;

import kengine.input.Gamepad;
import kengine.input.InputDevice;
import kengine.input.Keyboard;
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
	public var inputDevices:Array<InputDevice>;
	
	public function new(scene:Scene,updatePerSeconds:Int) 
	{
		this.scene = scene;
		System.notifyOnRender(render);
		dt = 1 / updatePerSeconds;
		Scheduler.addTimeTask(update, 0, dt);
		setUpInput();
	}
	
	/**
	 * override this function to setup your input devices
	 * if you don't want a gamepad, or if you want to use
	 * more than one modify this file accordingly
	 */
	function setUpInput() 
	{
		inputDevices = [Keyboard.get(0), Gamepad.get(0)];
	}

	function update(): Void {
		for (id in inputDevices)
		{
			id.update();
		}
		scene.update();
		
	}

	function render(framebuffer: Framebuffer): Void {
		framebuffer.g2.begin(true, Color.Black);
		scene.render(framebuffer);
		framebuffer.g2.end();
		
	}
	
	
}