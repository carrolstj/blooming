#pragma once

#include "ofMain.h"
#include "Flower.h"

class testApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

    #define NUM_CIRCLES 50
    float angle[NUM_CIRCLES];
    float dist[NUM_CIRCLES];
    ofPoint pos[NUM_CIRCLES];
    int posX;
    int posY;

    vector<Flower> flowers;//declare the vector

};
