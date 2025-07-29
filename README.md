# JUCE_FirFilter
Test of FIR Filter implementation

## Demonstration
[Youtube<img width="989" height="954" alt="Screenshot 2025-07-29 at 20 56 17" src="https://github.com/user-attachments/assets/7d872ba2-1621-456a-908b-ee65f92e8146" />](https://youtu.be/3PEqp8SDxo0?si=F6vbLT7BRgpUTpeU)

## 🛠️ Build Instructions
```
cd JUCE_FirFilter
git submodule update --init --recursive
cd build
cmake ..
cmake --build .
```

## Reference
- [designFIRLowpassWindowMethod()](https://docs.juce.com/master/structdsp_1_1FilterDesign.html#a7de8d8793286c45e9a83c199de896b6e)

- [JUCE/examples/DSP/FIRFilterDemo.h](https://github.com/juce-framework/JUCE/blob/master/examples/DSP/FIRFilterDemo.h)

- [Juce Tutorial 32- Building a Filter Plugin Using the DSP Module (FIR Filter)](https://www.youtube.com/watch?v=nTVXy35rG4Q&ab_channel=TheAudioProgrammer)
