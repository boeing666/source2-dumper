#pragma once

class C_OP_SetUserEvent : public CParticleFunctionOperator /*0x0*/  // sizeof 0x638, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    CPerParticleFloatInput m_flInput; // offset 0x1D8, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flRisingEdge; // offset 0x348, size 0x170, align 8 | MPropertyFriendlyName
    EventTypeSelection_t m_nRisingEventType; // offset 0x4B8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_04BC[0x4]; // offset 0x4BC
    CPerParticleFloatInput m_flFallingEdge; // offset 0x4C0, size 0x170, align 8 | MPropertyFriendlyName
    EventTypeSelection_t m_nFallingEventType; // offset 0x630, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0634[0x4]; // offset 0x634
};
