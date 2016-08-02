package;

import ImageSpriteSample;
import kha.System;
import kengine.App;
import mygame.TestScene;


class Main {
	public static function main() {
		System.init({title: "Project", width: 1024, height: 768}, function () {
			new App(new ImageSpriteSample(),60);
		});
	}
}
