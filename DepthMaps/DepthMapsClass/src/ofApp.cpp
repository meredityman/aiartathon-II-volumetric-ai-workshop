#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofLogNotice("Hello World");

    colorDir = ofDirectory("/media/DATA/NEW_DATA/work/workshop/AI Artathon II/aiartathon-II-volumetric-ai-workshop/DepthMaps/Data/frames/");
    depthDir = ofDirectory("/media/DATA/NEW_DATA/work/workshop/AI Artathon II/aiartathon-II-volumetric-ai-workshop/DepthMaps/Data/DepthFrames/");

    colorDir.allowExt("jpg");
    depthDir.allowExt("png");

    colorDir.listDir();
    depthDir.listDir();

    for( auto & path : colorDir){
        ofLogNotice() << path.path();
    }    
    
    for( auto & path : depthDir){
        ofLogNotice() << path.path();
    }

    assert( colorDir.size() ==  depthDir.listDir());

}

//--------------------------------------------------------------
void ofApp::update(){

    int i = ofGetFrameNum() % colorDir.size();

    colorImage.load(colorDir[i]);
    
    depthFrame.load(depthDir[i]);

}

//--------------------------------------------------------------
void ofApp::draw(){
    colorImage.draw(0, 0);
    depthFrame.draw(colorImage.getWidth(), 0);
}

//--------------------------------------------------------------
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
