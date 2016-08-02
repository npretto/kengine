package;
import kha.math.Vector2;
import utest.Assert;
using kengine.MathTools;
/**
 * ...
 * @author ...
 */
class TestMathTools
{

	public function new() {}
	
	public function testConversion()
	{
		Assert.equals(45, (Math.PI / 4).toDegrees());
		Assert.equals(Math.PI / 2, 90.toRadians());
	}
	
	public function testRotate()
	{
		Assert.same(new Vector2( 0, 100), new Vector2(100, 0).rotate(90));
		Assert.same(new Vector2( -100/Math.sqrt(2), 100/Math.sqrt(2)), new Vector2(0, 100).rotate(45));
		Assert.same(new Vector2( 100*Math.cos(30.toRadians()), 100*Math.sin(30.toRadians())), new Vector2(100, 0).rotate(30));
		Assert.same(new Vector2( 100*Math.cos(-30.toRadians()), 100*Math.sin(-30.toRadians())), new Vector2(100, 0).rotate(-30));
	}
	
}