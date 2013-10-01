//
//  Flower.cpp
//  blooming01
//
//  Created by shen carrol on 13-9-30.
//
//

#include "Flower.h"

// ----------------------------------
Flower::Flower()
{
    radius = ofRandom(20, 40);
    age = 20;
    lifespan = ofRandom(50, 100);
    color.r=ofRandom(0,20);
    color.g=ofRandom(0,200);
    color.b=255;
}

void Flower::drawMe(){
    
    
    //draw padels
    ofSetColor(color.r, color.g, color.b, 100);
    ofCircle(pos.x, pos.y + radius, smallRadius);
    ofCircle(pos.x, pos.y - radius, smallRadius);
    
    ofCircle(pos.x+cos(PI/6)*radius, pos.y + sin(PI/6)*radius, smallRadius);
    ofCircle(pos.x+cos(PI/6)*radius, pos.y - sin(PI/6)*radius, smallRadius);
    
    
    ofCircle(pos.x+cos(5*PI/6)*radius, pos.y + sin(PI/6)*radius, smallRadius);
    ofCircle(pos.x+cos(5*PI/6)*radius, pos.y - sin(PI/6)*radius, smallRadius);
    
    ofSetColor(color.r, color.g, color.b, 255);
    ofCircle(pos.x, pos.y, radius*4/5);// radius is for bud
}

void Flower::updateMe(){
    if( age < lifespan){
        age++;
    }
    
    smallRadius = radius*2/3*age/lifespan;//age/lifespam is a percentage, so pedal will appear later than buds
    
}
