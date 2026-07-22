#pragma once

class C_OP_RenderSound : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x348, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x21C]; // offset 0x0
    float32 m_flDurationScale; // offset 0x21C, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flSndLvlScale; // offset 0x220, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flPitchScale; // offset 0x224, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flVolumeScale; // offset 0x228, size 0x4, align 4 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nSndLvlField; // offset 0x22C, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    ParticleAttributeIndex_t m_nDurationField; // offset 0x230, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    ParticleAttributeIndex_t m_nPitchField; // offset 0x234, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    ParticleAttributeIndex_t m_nVolumeField; // offset 0x238, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    int32 m_nChannel; // offset 0x23C, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    int32 m_nCPReference; // offset 0x240, size 0x4, align 4 | MPropertyFriendlyName
    char[256] m_pszSoundName; // offset 0x244, size 0x100, align 1 | MPropertyFriendlyName MPropertyAttributeEditor
    bool m_bSuppressStopSoundEvent; // offset 0x344, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0345[0x3]; // offset 0x345
};
