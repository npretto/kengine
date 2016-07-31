var project = new Project('New Project');
project.addAssets('Assets/**');
project.addSources('Sources');
project.addSources('../');
resolve(project);
return project;
