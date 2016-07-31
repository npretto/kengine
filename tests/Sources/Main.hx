package;

import kha.System;

class Main {
	static function main() 
	{
		var runner = new haxe.unit.TestRunner();
        runner.add(new TestEntity());
        var success = runner.run();

        #if sys
        Sys.exit(success ? 0 : 1);
        #end
	}
}
