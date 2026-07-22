#pragma once

class C_OP_SetUserEvent : public CParticleFunctionOperator /*0x0*/  // sizeof 0x618, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    CPerParticleFloatInput m_flInput; // offset 0x1D0, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flRisingEdge; // offset 0x338, size 0x168, align 8 | MPropertyFriendlyName
    EventTypeSelection_t m_nRisingEventType; // offset 0x4A0, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_04A4[0x4]; // offset 0x4A4
    CPerParticleFloatInput m_flFallingEdge; // offset 0x4A8, size 0x168, align 8 | MPropertyFriendlyName
    EventTypeSelection_t m_nFallingEventType; // offset 0x610, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0614[0x4]; // offset 0x614
};
