#pragma once

class CBaseGrenade : public CBaseAnimGraph /*0x0*/  // sizeof 0xCD0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xC48]; // offset 0x0
    bool m_bDamageDetonating; // offset 0xC48, size 0x1, align 1
    char _pad_0C49[0x7]; // offset 0xC49
    CEntityIOOutput m_OnPlayerPickup; // offset 0xC50, size 0x18, align 255
    CEntityIOOutput m_OnExplode; // offset 0xC68, size 0x18, align 255
    bool m_bHasWarnedAI; // offset 0xC80, size 0x1, align 1
    bool m_bIsSmokeGrenade; // offset 0xC81, size 0x1, align 1
    bool m_bIsLive; // offset 0xC82, size 0x1, align 1
    char _pad_0C83[0x1]; // offset 0xC83
    float32 m_DmgRadius; // offset 0xC84, size 0x4, align 4
    GameTime_t m_flDetonateTime; // offset 0xC88, size 0x4, align 255
    float32 m_flWarnAITime; // offset 0xC8C, size 0x4, align 4
    float32 m_flDamage; // offset 0xC90, size 0x4, align 4
    char _pad_0C94[0x4]; // offset 0xC94
    CUtlSymbolLarge m_iszBounceSound; // offset 0xC98, size 0x8, align 8
    CUtlString m_ExplosionSound; // offset 0xCA0, size 0x8, align 8
    CHandle< CCSPlayerPawn > m_hThrower; // offset 0xCA8, size 0x4, align 4
    char _pad_0CAC[0x14]; // offset 0xCAC
    GameTime_t m_flNextAttack; // offset 0xCC0, size 0x4, align 255
    CHandle< CCSPlayerPawn > m_hOriginalThrower; // offset 0xCC4, size 0x4, align 4
    char _pad_0CC8[0x8]; // offset 0xCC8
};
