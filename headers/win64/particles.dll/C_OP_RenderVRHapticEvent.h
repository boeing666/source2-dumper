#pragma once

class C_OP_RenderVRHapticEvent : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x3B8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x230]; // offset 0x0
    ParticleVRHandChoiceList_t m_nHand; // offset 0x230, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nOutputHandCP; // offset 0x234, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nOutputField; // offset 0x238, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_023C[0x4]; // offset 0x23C
    CPerParticleFloatInput m_flAmplitude; // offset 0x240, size 0x178, align 8 | MPropertyFriendlyName
};
