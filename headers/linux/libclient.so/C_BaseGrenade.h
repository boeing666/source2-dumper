#pragma once

class C_BaseGrenade : public CBaseAnimGraph /*0x0*/  // sizeof 0x1238, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x11F0]; // offset 0x0
    bool m_bHasWarnedAI; // offset 0x11F0, size 0x1, align 1
    bool m_bIsSmokeGrenade; // offset 0x11F1, size 0x1, align 1
    bool m_bIsLive; // offset 0x11F2, size 0x1, align 1
    char _pad_11F3[0x1]; // offset 0x11F3
    float32 m_DmgRadius; // offset 0x11F4, size 0x4, align 4
    GameTime_t m_flDetonateTime; // offset 0x11F8, size 0x4, align 255
    float32 m_flWarnAITime; // offset 0x11FC, size 0x4, align 4
    float32 m_flDamage; // offset 0x1200, size 0x4, align 4
    char _pad_1204[0x4]; // offset 0x1204
    CUtlSymbolLarge m_iszBounceSound; // offset 0x1208, size 0x8, align 8
    CUtlString m_ExplosionSound; // offset 0x1210, size 0x8, align 8
    CHandle< C_CSPlayerPawn > m_hThrower; // offset 0x1218, size 0x4, align 4
    char _pad_121C[0x14]; // offset 0x121C
    GameTime_t m_flNextAttack; // offset 0x1230, size 0x4, align 255
    CHandle< C_CSPlayerPawn > m_hOriginalThrower; // offset 0x1234, size 0x4, align 4
};
