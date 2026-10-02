#pragma once

class CCitadelItemPickup : public CCitadelAnimatingModelEntity /*0x0*/  // sizeof 0x5550, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xC50]; // offset 0x0
    CCitadelMinimapComponent m_CCitadelMinimapComponent; // offset 0xC50, size 0x20, align 255
    int32 m_eLootType; // offset 0xC70, size 0x4, align 4
    int32 m_nCurrencyValue; // offset 0xC74, size 0x4, align 4
    CUtlSymbolLarge m_iszModelName; // offset 0xC78, size 0x8, align 8
    float32 m_flModelScale; // offset 0xC80, size 0x4, align 4
    CHandle< CBaseEntity > m_hTargetPlayer; // offset 0xC84, size 0x4, align 4
    float32 m_flFallRate; // offset 0xC88, size 0x4, align 4
    EObjectivePositions_t m_eObjectivePosition; // offset 0xC8C, size 0x4, align 4
    bool m_bRequireGroundForPickup; // offset 0xC90, size 0x1, align 1
    bool m_bOnGround; // offset 0xC91, size 0x1, align 1 | MNotSaved
    char _pad_0C92[0x2]; // offset 0xC92
    int32 m_nKillingTeamNumber; // offset 0xC94, size 0x4, align 4
    VectorWS m_vHomePosition; // offset 0xC98, size 0xC, align 4
    VectorWS m_vDropPosition; // offset 0xCA4, size 0xC, align 4
    GameTime_t m_tFirstPickupTime; // offset 0xCB0, size 0x4, align 255
    bool m_bPlaySpawnMusic; // offset 0xCB4, size 0x1, align 1
    char _pad_0CB5[0x489B]; // offset 0xCB5
};
