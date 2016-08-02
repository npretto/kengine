var project = new Project('New Project');
project.addAssets('Assets/**');
project.addSources('Sources');
project.addLibrary('kengine');
resolve(project);