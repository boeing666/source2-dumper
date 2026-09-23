#pragma once

class C_BaseGrenade : public CBaseAnimGraph /*0x0*/  // sizeof 0x12B0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1268]; // offset 0x0
    bool m_bHasWarnedAI; // offset 0x1268, size 0x1, align 1
    bool m_bIsSmokeGrenade; // offset 0x1269, size 0x1, align 1
    bool m_bIsLive; // offset 0x126A, size 0x1, align 1
    char _pad_126B[0x1]; // offset 0x126B
    float32 m_DmgRadius; // offset 0x126C, size 0x4, align 4
    GameTime_t m_flDetonateTime; // offset 0x1270, size 0x4, align 255
    float32 m_flWarnAITime; // offset 0x1274, size 0x4, align 4
    float32 m_flDamage; // offset 0x1278, size 0x4, align 4
    char _pad_127C[0x4]; // offset 0x127C
    CUtlSymbolLarge m_iszBounceSound; // offset 0x1280, size 0x8, align 8
    CUtlString m_ExplosionSound; // offset 0x1288, size 0x8, align 8
    CHandle< C_CSPlayerPawn > m_hThrower; // offset 0x1290, size 0x4, align 4
    char _pad_1294[0x14]; // offset 0x1294
    GameTime_t m_flNextAttack; // offset 0x12A8, size 0x4, align 255
    CHandle< C_CSPlayerPawn > m_hOriginalThrower; // offset 0x12AC, size 0x4, align 4
};
