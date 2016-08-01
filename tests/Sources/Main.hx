package;

import kha.System;
import utest.ui.Report;

class Main {
	static function main() 
	{
		var runner = new utest.Runner();
        runner.addCase(new TestEntity());
		Report.create(runner);
        runner.run();
	}
}
