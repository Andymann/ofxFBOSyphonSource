//
//  SyphonSource.h
//  ofxPiMapper_011
//
//  Created by Andy Fischer on 06.10.19.
//

#ifndef SyphonSource_h
#define SyphonSource_h

#pragma once

#include "ofMain.h"
#include "FboSource.h"
#include "ofxSyphon.h"

class ofxFBOSyphonSource : public ofx::piMapper::FboSource {
public:
    void setup();
    void update();
    void draw();
    void init(string pServername, string pAppname);
    
    //void loadShader(const string& pName, const string& shaderfile);
    
    //ofxGLSLSandbox *glslSandbox;
    ofxSyphonClient *syphonClient;
    
    std::vector<ofRectangle> rects;
    std::vector<float> rectSpeeds;
};

#endif /* SyphonSource_h */
