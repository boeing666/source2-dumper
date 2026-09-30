#pragma once

class CCitadelItemPickup : public CCitadelAnimatingModelEntity /*0x0*/  // sizeof 0x5500, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xC00]; // offset 0x0
    CCitadelMinimapComponent m_CCitadelMinimapComponent; // offset 0xC00, size 0x20, align 255
    int32 m_eLootType; // offset 0xC20, size 0x4, align 4
    int32 m_nCurrencyValue; // offset 0xC24, size 0x4, align 4
    CUtlSymbolLarge m_iszModelName; // offset 0xC28, size 0x8, align 8
    float32 m_flModelScale; // offset 0xC30, size 0x4, align 4
    CHandle< CBaseEntity > m_hTargetPlayer; // offset 0xC34, size 0x4, align 4
    float32 m_flFallRate; // offset 0xC38, size 0x4, align 4
    EObjectivePositions_t m_eObjectivePosition; // offset 0xC3C, size 0x4, align 4
    bool m_bRequireGroundForPickup; // offset 0xC40, size 0x1, align 1
    bool m_bOnGround; // offset 0xC41, size 0x1, align 1 | MNotSaved
    char _pad_0C42[0x2]; // offset 0xC42
    int32 m_nKillingTeamNumber; // offset 0xC44, size 0x4, align 4
    VectorWS m_vHomePosition; // offset 0xC48, size 0xC, align 4
    VectorWS m_vDropPosition; // offset 0xC54, size 0xC, align 4
    GameTime_t m_tFirstPickupTime; // offset 0xC60, size 0x4, align 255
    bool m_bPlaySpawnMusic; // offset 0xC64, size 0x1, align 1
    char _pad_0C65[0x489B]; // offset 0xC65
};
