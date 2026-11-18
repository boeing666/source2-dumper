#pragma once

class C_NextBotCombatCharacter : public C_BaseCombatCharacter /*0x0*/  // sizeof 0xE68, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xE40]; // offset 0x0
    CountdownTimer m_shadowTimer; // offset 0xE40, size 0x18, align 8
    bool m_bInFrustum; // offset 0xE58, size 0x1, align 1
    char _pad_0E59[0x3]; // offset 0xE59
    int32 m_nInFrustumFrame; // offset 0xE5C, size 0x4, align 4
    float32 m_flFrustumDistanceSqr; // offset 0xE60, size 0x4, align 4
    uint8 m_nLod; // offset 0xE64, size 0x1, align 1
    char _pad_0E65[0x3]; // offset 0xE65
};
