#pragma once

class CBaseGrenade : public CBaseAnimGraph /*0x0*/  // sizeof 0x9F0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x968]; // offset 0x0
    bool m_bDamageDetonating; // offset 0x968, size 0x1, align 1
    char _pad_0969[0x7]; // offset 0x969
    CEntityIOOutput m_OnPlayerPickup; // offset 0x970, size 0x18, align 255
    CEntityIOOutput m_OnExplode; // offset 0x988, size 0x18, align 255
    bool m_bHasWarnedAI; // offset 0x9A0, size 0x1, align 1
    bool m_bIsSmokeGrenade; // offset 0x9A1, size 0x1, align 1
    bool m_bIsLive; // offset 0x9A2, size 0x1, align 1
    char _pad_09A3[0x1]; // offset 0x9A3
    float32 m_DmgRadius; // offset 0x9A4, size 0x4, align 4
    GameTime_t m_flDetonateTime; // offset 0x9A8, size 0x4, align 255
    float32 m_flWarnAITime; // offset 0x9AC, size 0x4, align 4
    float32 m_flDamage; // offset 0x9B0, size 0x4, align 4
    char _pad_09B4[0x4]; // offset 0x9B4
    CUtlSymbolLarge m_iszBounceSound; // offset 0x9B8, size 0x8, align 8
    CUtlString m_ExplosionSound; // offset 0x9C0, size 0x8, align 8
    CHandle< CCSPlayerPawn > m_hThrower; // offset 0x9C8, size 0x4, align 4
    char _pad_09CC[0x14]; // offset 0x9CC
    GameTime_t m_flNextAttack; // offset 0x9E0, size 0x4, align 255
    CHandle< CCSPlayerPawn > m_hOriginalThrower; // offset 0x9E4, size 0x4, align 4
    char _pad_09E8[0x8]; // offset 0x9E8
};
