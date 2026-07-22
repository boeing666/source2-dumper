#pragma once

class C_NextBotCombatCharacter : public C_BaseCombatCharacter /*0x0*/  // sizeof 0xB88, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xB60]; // offset 0x0
    CountdownTimer m_shadowTimer; // offset 0xB60, size 0x18, align 8
    bool m_bInFrustum; // offset 0xB78, size 0x1, align 1
    char _pad_0B79[0x3]; // offset 0xB79
    int32 m_nInFrustumFrame; // offset 0xB7C, size 0x4, align 4
    float32 m_flFrustumDistanceSqr; // offset 0xB80, size 0x4, align 4
    uint8 m_nLod; // offset 0xB84, size 0x1, align 1
    char _pad_0B85[0x3]; // offset 0xB85
};
