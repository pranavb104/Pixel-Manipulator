#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	//Sound
	mySound.load("taser_LAZER.mp3");

	Tatt_5.load("Tatt_5.jpg");
	
}
	


//--------------------------------------------------------------
void ofApp::update() {
	
		if ((ofGetMousePressed(OF_MOUSE_BUTTON_LEFT))) {

			if (!mySound.isPlaying())
			{
				mySound.play();
				mySound.setVolume(1);

			}

			for (int i = -15; i < 15; i++) {
				for (int j = -15; j < 15; j++) {

					Tatt_5.getPixels().setColor(ofGetMouseX() + i, ofGetMouseY() + j, ofColor::white);//place your pixels

				}
			}
		}

		Tatt_5.update();
	
	}
	

//--------------------------------------------------------------
void ofApp::draw(){
	
	
				//Drawing Tattoo
				ofSetColor(255, 255, 255);
				Tatt_5.draw(ofGetWidth() / 2 - Tatt_5.getWidth() / 2, 0);
				ofSetColor(255, 255, 255);

				//Iterating through Pixels
				ofPixels & pixels = Tatt_5.getPixels();
				int count = 0;
				for (int i = 0; i < Tatt_5.getWidth()*Tatt_5.getHeight(); i++) {
					if (pixels[i] == 255) {
						count++;
					}
				}

				//If Pixels Removed
				if (count > 1166000) {


					cout << "Number of  Pixels " << endl;

				}
}

				
void ofApp::keyPressed(int key){

	
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

	

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}

/*ofPixels & pixels = img.getPixels();
int count = 0;
for (int i = 0; i <img.getWidth()*img.getHeight(); i++) {
	if (pixels[i] == 255) {
		count++;
	}
}
if (count > 2073598) {
	cout << "Number of  Pixels " << count << endl;
}*/

/*int count = 0;
int w = img.getWidth();
int h = img.getHeight();

for (int k = 0; k < w; k++) {
	for (int l = 0; l < h; l++) {

		if (pixels[l*w + k] > 251) {
			count++;
		}
	}
}*/