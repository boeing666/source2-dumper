#pragma once

class C_NextBotCombatCharacter : public C_BaseCombatCharacter /*0x0*/  // sizeof 0xC78, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xC50]; // offset 0x0
    CountdownTimer m_shadowTimer; // offset 0xC50, size 0x18, align 8
    bool m_bInFrustum; // offset 0xC68, size 0x1, align 1
    char _pad_0C69[0x3]; // offset 0xC69
    int32 m_nInFrustumFrame; // offset 0xC6C, size 0x4, align 4
    float32 m_flFrustumDistanceSqr; // offset 0xC70, size 0x4, align 4
    uint8 m_nLod; // offset 0xC74, size 0x1, align 1
    char _pad_0C75[0x3]; // offset 0xC75
};
