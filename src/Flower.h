//
//  Flower.h
//  blooming01
//
//  Created by shen carrol on 13-9-30.
//
//
#pragma once
#include "ofMain.h"


class Flower
{
public:
    
    Flower();
    void updateMe();
    void drawMe();
    
    
    ofPoint pos;
    ofColor color;
    float radius, smallRadius;
    float age, lifespan;
};