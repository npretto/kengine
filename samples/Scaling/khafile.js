var project = new Project('New Project');
project.addAssets('Assets/**');
project.addSources('Sources');
project.addLibrary('kengine');
project.addLibrary('actuate');
project.addDefine('debug');
resolve(project);