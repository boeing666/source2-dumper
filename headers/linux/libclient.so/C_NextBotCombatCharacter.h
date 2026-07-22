#pragma once

class C_NextBotCombatCharacter : public C_BaseCombatCharacter /*0x0*/  // sizeof 0xD10, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xCE8]; // offset 0x0
    CountdownTimer m_shadowTimer; // offset 0xCE8, size 0x18, align 8
    bool m_bInFrustum; // offset 0xD00, size 0x1, align 1
    char _pad_0D01[0x3]; // offset 0xD01
    int32 m_nInFrustumFrame; // offset 0xD04, size 0x4, align 4
    float32 m_flFrustumDistanceSqr; // offset 0xD08, size 0x4, align 4
    uint8 m_nLod; // offset 0xD0C, size 0x1, align 1
    char _pad_0D0D[0x3]; // offset 0xD0D
};
