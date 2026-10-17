#pragma once

class C_DOTA_BaseNPC_XP_Fountain : public C_DOTA_BaseNPC_Building /*0x0*/  // sizeof 0x1CB8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1CAC]; // offset 0x0
    ParticleIndex_t m_nFxRing; // offset 0x1CAC, size 0x4, align 255
    bool m_bActive; // offset 0x1CB0, size 0x1, align 1
    bool m_bIsBeingGranted; // offset 0x1CB1, size 0x1, align 1
    bool m_bWasBeingGranted; // offset 0x1CB2, size 0x1, align 1
    char _pad_1CB3[0x1]; // offset 0x1CB3
    int32 m_nIntervals; // offset 0x1CB4, size 0x4, align 4
};
