#pragma once

class C_Citadel_BreakableProp : public CBaseAnimGraph /*0x0*/  // sizeof 0xF28, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xE08]; // offset 0x0
    int32 m_nGoldCost; // offset 0xE08, size 0x4, align 4
    char _pad_0E0C[0x8]; // offset 0xE0C
    int32 m_nMeleeHitsTaken; // offset 0xE14, size 0x4, align 4
    ParticleIndex_t m_nAmbientEffect; // offset 0xE18, size 0x4, align 255
    char _pad_0E1C[0x10C]; // offset 0xE1C
};
