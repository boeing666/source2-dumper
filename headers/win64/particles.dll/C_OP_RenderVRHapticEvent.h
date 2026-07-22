#pragma once

class C_OP_RenderVRHapticEvent : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x3A8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x228]; // offset 0x0
    ParticleVRHandChoiceList_t m_nHand; // offset 0x228, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nOutputHandCP; // offset 0x22C, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nOutputField; // offset 0x230, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_0234[0x4]; // offset 0x234
    CPerParticleFloatInput m_flAmplitude; // offset 0x238, size 0x170, align 8 | MPropertyFriendlyName
};
