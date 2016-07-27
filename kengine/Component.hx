package kengine;
import kengine.Entity;
import kha.Framebuffer;

/**
 * ...
 * @author Alessandro Bertoldi
 */
class Component
{
	public var owner : Entity;
	
	public function new() { }
	
	public function update() { }
	
	public function render(frameBuffer : Framebuffer) { }
	
	public function onAdded() { }
	
	public function onRemove() { }
	
}