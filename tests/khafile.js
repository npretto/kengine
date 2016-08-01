var project = new Project('New Project');
project.addAssets('Assets/**');
project.addSources('Sources');
project.addSources('../');
project.addLibrary("utest");
// resolve(project);
return project;
