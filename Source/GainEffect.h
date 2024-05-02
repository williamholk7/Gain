/*
  ==============================================================================

    GainEffect.h
    Created: 26 Oct 2023 5:15:58pm
    Author:  William Holk

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

class GainEffect{
    
public:
    
    float processSample(float x);
    
    void setGain(float gainInDB);
    
    void setFs(float newFs);
    
private:
    
    float Fs = 48000.f;
    float gain = 0.f;
    
};
