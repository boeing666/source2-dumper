#pragma once

class C_OP_RenderVRHapticEvent : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x390, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x21C]; // offset 0x0
    ParticleVRHandChoiceList_t m_nHand; // offset 0x21C, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nOutputHandCP; // offset 0x220, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nOutputField; // offset 0x224, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    CPerParticleFloatInput m_flAmplitude; // offset 0x228, size 0x168, align 8 | MPropertyFriendlyName
};
