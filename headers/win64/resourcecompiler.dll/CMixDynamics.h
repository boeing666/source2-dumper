#pragma once

class CMixDynamics : public CMixPropertyBase /*0x0*/  // sizeof 0x58, align 0x8 [vtable] (sounddoc_lib) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0x20]; // offset 0x0
    int32 m_nChannels; // offset 0x20, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    float32 m_fldbNoiseGateThreshold; // offset 0x24, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_fldbGain; // offset 0x28, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_fldbCompressionThreshold; // offset 0x2C, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_fldbLimiterThreshold; // offset 0x30, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_fldbKneeWidth; // offset 0x34, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flRatio; // offset 0x38, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flLimiterRatio; // offset 0x3C, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flAttackTime; // offset 0x40, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flReleaseTime; // offset 0x44, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flRMSTime; // offset 0x48, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flWetMix; // offset 0x4C, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bPeakMode; // offset 0x50, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0051[0x3]; // offset 0x51
    int32 m_nUIPage; // offset 0x54, size 0x4, align 4
};
