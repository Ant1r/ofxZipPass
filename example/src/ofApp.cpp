#include "ofApp.h"
#include "ofxZipPass.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetLogLevel(OF_LOG_VERBOSE);
	
	ofLogVerbose("ofApp") << "trying to open " << ofToDataPath("This.zip") << endl;
	
	ofxUnzipPass zip(ofToDataPath("This.zip"), "ofxZipPass");
	
	if(zip.isOk()) zip.unzipTo(ofToDataPath(""));
	else ofLogVerbose("ofApp") << "error opening " << ofToDataPath("This.zip");
	
	ofExit();
}


