#pragma once

class C_Citadel_BreakableProp : public CBaseAnimGraph /*0x0*/  // sizeof 0xED0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xDB0]; // offset 0x0
    int32 m_nGoldCost; // offset 0xDB0, size 0x4, align 4
    char _pad_0DB4[0x8]; // offset 0xDB4
    int32 m_nMeleeHitsTaken; // offset 0xDBC, size 0x4, align 4
    ParticleIndex_t m_nAmbientEffect; // offset 0xDC0, size 0x4, align 255
    char _pad_0DC4[0x10C]; // offset 0xDC4
};
