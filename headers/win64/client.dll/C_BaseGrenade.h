#pragma once

class C_BaseGrenade : public CBaseAnimGraph /*0x0*/  // sizeof 0x11C8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1180]; // offset 0x0
    bool m_bHasWarnedAI; // offset 0x1180, size 0x1, align 1
    bool m_bIsSmokeGrenade; // offset 0x1181, size 0x1, align 1
    bool m_bIsLive; // offset 0x1182, size 0x1, align 1
    char _pad_1183[0x1]; // offset 0x1183
    float32 m_DmgRadius; // offset 0x1184, size 0x4, align 4
    GameTime_t m_flDetonateTime; // offset 0x1188, size 0x4, align 255
    float32 m_flWarnAITime; // offset 0x118C, size 0x4, align 4
    float32 m_flDamage; // offset 0x1190, size 0x4, align 4
    char _pad_1194[0x4]; // offset 0x1194
    CUtlSymbolLarge m_iszBounceSound; // offset 0x1198, size 0x8, align 8
    CUtlString m_ExplosionSound; // offset 0x11A0, size 0x8, align 8
    CHandle< C_CSPlayerPawn > m_hThrower; // offset 0x11A8, size 0x4, align 4
    char _pad_11AC[0x14]; // offset 0x11AC
    GameTime_t m_flNextAttack; // offset 0x11C0, size 0x4, align 255
    CHandle< C_CSPlayerPawn > m_hOriginalThrower; // offset 0x11C4, size 0x4, align 4
};
