/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class JUCE_FirFilterAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    JUCE_FirFilterAudioProcessorEditor (JUCE_FirFilterAudioProcessor&);
    ~JUCE_FirFilterAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    JUCE_FirFilterAudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (JUCE_FirFilterAudioProcessorEditor)
};
