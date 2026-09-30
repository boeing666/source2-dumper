#pragma once

class CVMixSteamAudioHRTFProcessorDesc : public CVMixBaseProcessorDesc /*0x0*/  // sizeof 0x50, align 0x8 [vtable] (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    CVMixParameterFloat m_paramPositionX; // offset 0x28, size 0x4, align 4
    CVMixParameterFloat m_paramPositionY; // offset 0x2C, size 0x4, align 4
    CVMixParameterFloat m_paramPositionZ; // offset 0x30, size 0x4, align 4
    CVMixParameterFloat m_paramInterpolation; // offset 0x34, size 0x4, align 4
    CVMixParameterFloat m_paramDirectMixLevel; // offset 0x38, size 0x4, align 4
    CVMixParameterFloat m_paramPerspectiveCorrection; // offset 0x3C, size 0x4, align 4
    CVMixParameterFloat m_paramRelativePosition; // offset 0x40, size 0x4, align 4
    CVMixParameterFloat m_paramDelayLeft; // offset 0x44, size 0x4, align 4
    CVMixParameterFloat m_paramDelayRight; // offset 0x48, size 0x4, align 4
    char _pad_004C[0x4]; // offset 0x4C
};
