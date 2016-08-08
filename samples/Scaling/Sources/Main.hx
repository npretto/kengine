package;

import kha.System;
import kengine.App;


class Main {
	public static function main() {
		System.init({title: "Project", width: 800, height: 600,samplesPerPixel:2}, function () {
			kha.Assets.loadEverything(function(){
				new App(new ScalingSample(),60);
			});
			
		});
	}
}
