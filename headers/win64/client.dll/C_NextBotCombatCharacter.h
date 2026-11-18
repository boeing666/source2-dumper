#pragma once

class C_NextBotCombatCharacter : public C_BaseCombatCharacter /*0x0*/  // sizeof 0xCD8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xCB0]; // offset 0x0
    CountdownTimer m_shadowTimer; // offset 0xCB0, size 0x18, align 8
    bool m_bInFrustum; // offset 0xCC8, size 0x1, align 1
    char _pad_0CC9[0x3]; // offset 0xCC9
    int32 m_nInFrustumFrame; // offset 0xCCC, size 0x4, align 4
    float32 m_flFrustumDistanceSqr; // offset 0xCD0, size 0x4, align 4
    uint8 m_nLod; // offset 0xCD4, size 0x1, align 1
    char _pad_0CD5[0x3]; // offset 0xCD5
};
