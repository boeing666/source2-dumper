#pragma once

class CVMixSteamAudioDirectProcessorDesc : public CVMixBaseProcessorDesc /*0x0*/  // sizeof 0x90, align 0x8 [vtable] (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    CVMixParameterFloat m_paramPositionX; // offset 0x28, size 0x4, align 4
    CVMixParameterFloat m_paramPositionY; // offset 0x2C, size 0x4, align 4
    CVMixParameterFloat m_paramPositionZ; // offset 0x30, size 0x4, align 4
    CVMixParameterFloat m_paramRightX; // offset 0x34, size 0x4, align 4
    CVMixParameterFloat m_paramRightY; // offset 0x38, size 0x4, align 4
    CVMixParameterFloat m_paramRightZ; // offset 0x3C, size 0x4, align 4
    CVMixParameterFloat m_paramUpX; // offset 0x40, size 0x4, align 4
    CVMixParameterFloat m_paramUpY; // offset 0x44, size 0x4, align 4
    CVMixParameterFloat m_paramUpZ; // offset 0x48, size 0x4, align 4
    CVMixParameterFloat m_paramAheadX; // offset 0x4C, size 0x4, align 4
    CVMixParameterFloat m_paramAheadY; // offset 0x50, size 0x4, align 4
    CVMixParameterFloat m_paramAheadZ; // offset 0x54, size 0x4, align 4
    CVMixParameterFloat m_paramApplyDistanceAttenuation; // offset 0x58, size 0x4, align 4
    CVMixParameterFloat m_paramApplyAirAbsorption; // offset 0x5C, size 0x4, align 4
    CVMixParameterFloat m_paramApplyDirectivity; // offset 0x60, size 0x4, align 4
    CVMixParameterFloat m_paramApplyOcclusion; // offset 0x64, size 0x4, align 4
    CVMixParameterFloat m_paramApplyTransmission; // offset 0x68, size 0x4, align 4
    CVMixParameterFloat m_paramDipoleWeight; // offset 0x6C, size 0x4, align 4
    CVMixParameterFloat m_paramDipolePower; // offset 0x70, size 0x4, align 4
    CVMixParameterFloat m_paramOcclusion; // offset 0x74, size 0x4, align 4
    CVMixParameterFloat m_paramTransmissionLow; // offset 0x78, size 0x4, align 4
    CVMixParameterFloat m_paramTransmissionMid; // offset 0x7C, size 0x4, align 4
    CVMixParameterFloat m_paramTransmissionHigh; // offset 0x80, size 0x4, align 4
    CVMixParameterFloat m_paramBand; // offset 0x84, size 0x4, align 4
    CVMixDataOffset m_paramTransmission; // offset 0x88, size 0x4, align 255
    char _pad_008C[0x4]; // offset 0x8C
};
