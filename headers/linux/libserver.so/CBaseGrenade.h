#pragma once

class CBaseGrenade : public CBaseAnimGraph /*0x0*/  // sizeof 0xDB0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xD28]; // offset 0x0
    bool m_bDamageDetonating; // offset 0xD28, size 0x1, align 1
    char _pad_0D29[0x7]; // offset 0xD29
    CEntityIOOutput m_OnPlayerPickup; // offset 0xD30, size 0x18, align 255
    CEntityIOOutput m_OnExplode; // offset 0xD48, size 0x18, align 255
    bool m_bHasWarnedAI; // offset 0xD60, size 0x1, align 1
    bool m_bIsSmokeGrenade; // offset 0xD61, size 0x1, align 1
    bool m_bIsLive; // offset 0xD62, size 0x1, align 1
    char _pad_0D63[0x1]; // offset 0xD63
    float32 m_DmgRadius; // offset 0xD64, size 0x4, align 4
    GameTime_t m_flDetonateTime; // offset 0xD68, size 0x4, align 255
    float32 m_flWarnAITime; // offset 0xD6C, size 0x4, align 4
    float32 m_flDamage; // offset 0xD70, size 0x4, align 4
    char _pad_0D74[0x4]; // offset 0xD74
    CUtlSymbolLarge m_iszBounceSound; // offset 0xD78, size 0x8, align 8
    CUtlString m_ExplosionSound; // offset 0xD80, size 0x8, align 8
    CHandle< CCSPlayerPawn > m_hThrower; // offset 0xD88, size 0x4, align 4
    char _pad_0D8C[0x14]; // offset 0xD8C
    GameTime_t m_flNextAttack; // offset 0xDA0, size 0x4, align 255
    CHandle< CCSPlayerPawn > m_hOriginalThrower; // offset 0xDA4, size 0x4, align 4
    char _pad_0DA8[0x8]; // offset 0xDA8
};
