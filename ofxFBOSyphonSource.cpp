//
//  SyphonSource.cpp
//  ofxPiMapper_011
//
//  Created by Andy Fischer on 06.10.19.
//
#include <stdio.h>
#include "ofxFBOSyphonSource.h"


void ofxFBOSyphonSource::setup(){
    
}

void ofxFBOSyphonSource::init(string pServername, string pAppname){
    name = pAppname;
        if(pServername!=""){
        name += + ":" + pServername;
    }
    
    // Allocate our FBO source, decide how big it should be
    allocate(1024, 768);
    
    syphonClient = new ofxSyphonClient();
    syphonClient->setup();
    syphonClient->set(pServername, pAppname);

}

// Don't do any drawing here
void ofxFBOSyphonSource::update(){
    
}

// No need to take care of fbo.begin() and fbo.end() here.
// All within draw() is being rendered into fbo;
void ofxFBOSyphonSource::draw(){
    syphonClient->draw(0, 0);
}

