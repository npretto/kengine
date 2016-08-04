package;

import kha.System;
import kengine.App;


class Main {
	public static function main() {
		System.init({title: "Project", width: 1024, height: 768}, function () {
			kha.Assets.loadEverything(function()
			{
				new App(new TestScene(),60);
			});
		});
	}
}

