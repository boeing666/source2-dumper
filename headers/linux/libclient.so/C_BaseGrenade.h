#pragma once

class C_BaseGrenade : public CBaseAnimGraph /*0x0*/  // sizeof 0x1150, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1108]; // offset 0x0
    bool m_bHasWarnedAI; // offset 0x1108, size 0x1, align 1
    bool m_bIsSmokeGrenade; // offset 0x1109, size 0x1, align 1
    bool m_bIsLive; // offset 0x110A, size 0x1, align 1
    char _pad_110B[0x1]; // offset 0x110B
    float32 m_DmgRadius; // offset 0x110C, size 0x4, align 4
    GameTime_t m_flDetonateTime; // offset 0x1110, size 0x4, align 255
    float32 m_flWarnAITime; // offset 0x1114, size 0x4, align 4
    float32 m_flDamage; // offset 0x1118, size 0x4, align 4
    char _pad_111C[0x4]; // offset 0x111C
    CUtlSymbolLarge m_iszBounceSound; // offset 0x1120, size 0x8, align 8
    CUtlString m_ExplosionSound; // offset 0x1128, size 0x8, align 8
    CHandle< C_CSPlayerPawn > m_hThrower; // offset 0x1130, size 0x4, align 4
    char _pad_1134[0x14]; // offset 0x1134
    GameTime_t m_flNextAttack; // offset 0x1148, size 0x4, align 255
    CHandle< C_CSPlayerPawn > m_hOriginalThrower; // offset 0x114C, size 0x4, align 4
};
