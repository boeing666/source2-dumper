#pragma once

class CBaseGrenade : public CBaseAnimGraph /*0x0*/  // sizeof 0xAD0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xA48]; // offset 0x0
    bool m_bDamageDetonating; // offset 0xA48, size 0x1, align 1
    char _pad_0A49[0x7]; // offset 0xA49
    CEntityIOOutput m_OnPlayerPickup; // offset 0xA50, size 0x18, align 255
    CEntityIOOutput m_OnExplode; // offset 0xA68, size 0x18, align 255
    bool m_bHasWarnedAI; // offset 0xA80, size 0x1, align 1
    bool m_bIsSmokeGrenade; // offset 0xA81, size 0x1, align 1
    bool m_bIsLive; // offset 0xA82, size 0x1, align 1
    char _pad_0A83[0x1]; // offset 0xA83
    float32 m_DmgRadius; // offset 0xA84, size 0x4, align 4
    GameTime_t m_flDetonateTime; // offset 0xA88, size 0x4, align 255
    float32 m_flWarnAITime; // offset 0xA8C, size 0x4, align 4
    float32 m_flDamage; // offset 0xA90, size 0x4, align 4
    char _pad_0A94[0x4]; // offset 0xA94
    CUtlSymbolLarge m_iszBounceSound; // offset 0xA98, size 0x8, align 8
    CUtlString m_ExplosionSound; // offset 0xAA0, size 0x8, align 8
    CHandle< CCSPlayerPawn > m_hThrower; // offset 0xAA8, size 0x4, align 4
    char _pad_0AAC[0x14]; // offset 0xAAC
    GameTime_t m_flNextAttack; // offset 0xAC0, size 0x4, align 255
    CHandle< CCSPlayerPawn > m_hOriginalThrower; // offset 0xAC4, size 0x4, align 4
    char _pad_0AC8[0x8]; // offset 0xAC8
};
