#pragma once

class CVMixSteamAudioPathingProcessorDesc : public CVMixBaseProcessorDesc /*0x0*/  // sizeof 0x48, align 0x8 [vtable] (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    CVMixParameterFloat m_paramPositionX; // offset 0x28, size 0x4, align 4
    CVMixParameterFloat m_paramPositionY; // offset 0x2C, size 0x4, align 4
    CVMixParameterFloat m_paramPositionZ; // offset 0x30, size 0x4, align 4
    CVMixParameterFloat m_paramPathingMixLevel; // offset 0x34, size 0x4, align 4
    CVMixParameterFloat m_paramBand; // offset 0x38, size 0x4, align 4
    CVMixDataOffset m_paramArrayPathingEQ; // offset 0x3C, size 0x4, align 255
    CVMixDataOffset m_paramArrayPathingCoefficients; // offset 0x40, size 0x4, align 255
    char _pad_0044[0x4]; // offset 0x44
};
