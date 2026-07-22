#pragma once

class CMixSteamAudioDirect : public CMixPropertyBase /*0x0*/  // sizeof 0x58, align 0x8 [vtable] (sounddoc_lib) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0x20]; // offset 0x0
    bool m_bApplyDistanceAttenuation; // offset 0x20, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bApplyAirAbsorption; // offset 0x21, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bApplyDirectivity; // offset 0x22, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bApplyOcclusion; // offset 0x23, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bApplyTransmission; // offset 0x24, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0025[0x3]; // offset 0x25
    float32 m_flDipoleWeight; // offset 0x28, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    float32 m_flDipolePower; // offset 0x2C, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    float32 m_flOcclusion; // offset 0x30, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    float32 m_flTransmissionLow; // offset 0x34, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    float32 m_flTransmissionMid; // offset 0x38, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    float32 m_flTransmissionHigh; // offset 0x3C, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    CUtlVector< float32 > m_vecTransmission; // offset 0x40, size 0x18, align 8 | MPropertyFriendlyName MPropertyAttributeRange
};
