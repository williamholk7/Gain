/*
  ==============================================================================

    GainEffect.cpp
    Created: 26 Oct 2023 5:15:58pm
    Author:  William Holk

  ==============================================================================
*/

#include "GainEffect.h"
#include <cmath>

float GainEffect::processSample(float x){
    float y = gain*x;
    
    return y;
}

void GainEffect::setGain(float gainInDB){
    gain = pow(10.f, (gainInDB/20.f));
}

void GainEffect::setFs(float newFs){
    Fs = newFs;
}
