var project = new Project('New Project');
project.addAssets('Assets/**');
project.addSources('Sources');
project.addSources('../');
return project;
