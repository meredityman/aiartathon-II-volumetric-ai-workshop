#include "ofApp.h"



//--------------------------------------------------------------
ofMesh getMesh(float w, float h, int c, int r){
    ofMesh mesh;
    mesh.setMode(ofPrimitiveMode::OF_PRIMITIVE_TRIANGLES);

    for( int y = 0; y < r; y++ ){

        for( int x = 0; x < c; x++){

            glm::vec2 uv = glm::vec2(
                (float)x/( c - 1 ), (float)y / (r - 1)
            );

            glm::vec3 pos = glm::vec3(
                ofLerp( -0.5 * w, 0.5 * w, uv.x),
                ofLerp( -0.5 * h, 0.5 * h, uv.y),
                0.0
            );

            mesh.addVertex( pos);
            mesh.addTexCoord(uv);
        }
    }


    for(int y = 0; y < r - 1; y++){
        for(int x = 0; x < c - 1; x++){

            size_t i0, i1, i2, i3, i4, i5;

            i0 = ((y + 1) * c) + x;
            i1 = (y * c) + x;
            i2 = ((y + 1) * c) + x + 1;
            i3 = i1;
            i4 = i2;
            i5 = (y * c) + x + 1;

            mesh.addTriangle(i0, i1, i2);
            mesh.addTriangle(i3, i4, i5);
        }
    }

    // mesh.addTriangle(0,1,3);
    // mesh.addTriangle(0,3,2);

    return mesh;
};


//--------------------------------------------------------------
void ofApp::setup(){
    ofLogNotice("Hello World");
    ofDisableArbTex();
    ofSetDepthTest(true);

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


    mesh = getMesh(800, 800, 256, 256);

}

//--------------------------------------------------------------
void ofApp::update(){

    int i = ofGetFrameNum() % colorDir.size();
    colorImage.load(colorDir[i]); 
    depthFrame.load(depthDir[i]);

    ofPixels depthPix = depthFrame.getPixels();

    for( int i = 0; i < depthPix.size(); i++){
        float d = depthPix.getColor(i).r ;
        glm::vec3 pos = mesh.getVertex(i);
        pos.z = d;
        mesh.setVertex(i, pos);
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    // colorImage.draw(0, 0);
    // depthFrame.draw(colorImage.getWidth(), 0);


    cam.begin();
    colorImage.getTexture().bind();
    mesh.draw();
    mesh.drawWireframe();
    cam.end();
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
