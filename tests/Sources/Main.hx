package;

import kha.System;
import utest.ui.Report;

class Main {
	static function main() 
	{
		var runner = new utest.Runner();
        runner.addCase(new TestEntity());
		runner.addCase(new TestMathTools());
		Report.create(runner);
        runner.run();
	}
}
