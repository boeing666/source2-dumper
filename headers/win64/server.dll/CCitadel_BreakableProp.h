#pragma once

class CCitadel_BreakableProp : public CBaseAnimGraph /*0x0*/  // sizeof 0xE30, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xAF0]; // offset 0x0
    CCitadelMinimapComponent m_CCitadelMinimapComponent; // offset 0xAF0, size 0x20, align 255
    char _pad_0B10[0x8]; // offset 0xB10
    float32 m_flOverrideInitialSpawnTime; // offset 0xB18, size 0x4, align 4
    float32 m_flOverrideRespawnTime; // offset 0xB1C, size 0x4, align 4
    int32 m_nGoldCost; // offset 0xB20, size 0x4, align 4
    char _pad_0B24[0x4]; // offset 0xB24
    CUtlOrderedMap< ECurrencyType, BreakablePropCurrencyReward_t > m_mapCurrencyRewards; // offset 0xB28, size 0x28, align 8
    CUtlVector< CSubclassName< 0 > > m_vecPickupRewards; // offset 0xB50, size 0x18, align 8
    CUtlStringToken m_unAbilityIDToSpawn; // offset 0xB68, size 0x4, align 4
    CHandle< CCitadelPlayerPawn > m_hBreaker; // offset 0xB6C, size 0x4, align 4
    char _pad_0B70[0x284]; // offset 0xB70
    int32 m_nMeleeHitsTaken; // offset 0xDF4, size 0x4, align 4
    char _pad_0DF8[0x38]; // offset 0xDF8
};
