#pragma once

#include "ofMain.h"

class Application : public ofBaseApp{

	public:
		void Init();
		void Update();
		void Draw();

		void KeyPressed(int key);
		void KeyReleased(int key);
		void MouseMoved(int x, int y );
		void MouseDragged(int x, int y, int button);
		void MousePressed(int x, int y, int button);
		void MouseReleased(int x, int y, int button);
		void MouseEntered(int x, int y);
		void MouseExited(int x, int y);
		void WindowResized(int w, int h);
		void DragEvent(ofDragInfo dragInfo);
		void GotMessage(ofMessage msg);
		
};
