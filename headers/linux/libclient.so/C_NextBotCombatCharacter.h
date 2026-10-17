#pragma once

class C_NextBotCombatCharacter : public C_BaseCombatCharacter /*0x0*/  // sizeof 0xE00, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xDD8]; // offset 0x0
    CountdownTimer m_shadowTimer; // offset 0xDD8, size 0x18, align 8
    bool m_bInFrustum; // offset 0xDF0, size 0x1, align 1
    char _pad_0DF1[0x3]; // offset 0xDF1
    int32 m_nInFrustumFrame; // offset 0xDF4, size 0x4, align 4
    float32 m_flFrustumDistanceSqr; // offset 0xDF8, size 0x4, align 4
    uint8 m_nLod; // offset 0xDFC, size 0x1, align 1
    char _pad_0DFD[0x3]; // offset 0xDFD
};
