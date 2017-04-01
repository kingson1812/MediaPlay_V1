#include "ofMain.h"
#include "Application.h"

int main(void)
{
	ofSetupOpenGL(1024,768,ofWindowMode::OF_WINDOW);
	ofSetWindowTitle("Media Play #1");
	//ofIcoSpherePrimitive
	ofRunApp(new Application());

}
