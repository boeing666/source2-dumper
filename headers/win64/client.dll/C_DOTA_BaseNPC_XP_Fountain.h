#pragma once

class C_DOTA_BaseNPC_XP_Fountain : public C_DOTA_BaseNPC_Building /*0x0*/  // sizeof 0x1A30, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1A20]; // offset 0x0
    ParticleIndex_t m_nFxRing; // offset 0x1A20, size 0x4, align 255
    bool m_bActive; // offset 0x1A24, size 0x1, align 1
    bool m_bIsBeingGranted; // offset 0x1A25, size 0x1, align 1
    bool m_bWasBeingGranted; // offset 0x1A26, size 0x1, align 1
    char _pad_1A27[0x1]; // offset 0x1A27
    int32 m_nIntervals; // offset 0x1A28, size 0x4, align 4
    char _pad_1A2C[0x4]; // offset 0x1A2C
};
