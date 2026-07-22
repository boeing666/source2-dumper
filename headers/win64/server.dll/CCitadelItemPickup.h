#pragma once

class CCitadelItemPickup : public CCitadelAnimatingModelEntity /*0x0*/  // sizeof 0x5510, align 0x10 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xC08]; // offset 0x0
    CCitadelMinimapComponent m_CCitadelMinimapComponent; // offset 0xC08, size 0x20, align 255 | MNetworkEnable MNetworkUserGroup MNetworkAlias MNetworkTypeAlias
    int32 m_eLootType; // offset 0xC28, size 0x4, align 4 | MNetworkEnable
    int32 m_nCurrencyValue; // offset 0xC2C, size 0x4, align 4 | MNetworkEnable
    CUtlSymbolLarge m_iszModelName; // offset 0xC30, size 0x8, align 8 | MNetworkEnable
    float32 m_flModelScale; // offset 0xC38, size 0x4, align 4 | MNetworkEnable
    CHandle< CBaseEntity > m_hTargetPlayer; // offset 0xC3C, size 0x4, align 4 | MNetworkEnable
    float32 m_flFallRate; // offset 0xC40, size 0x4, align 4 | MNetworkEnable
    EObjectivePositions_t m_eObjectivePosition; // offset 0xC44, size 0x4, align 4
    bool m_bRequireGroundForPickup; // offset 0xC48, size 0x1, align 1
    bool m_bOnGround; // offset 0xC49, size 0x1, align 1 | MNotSaved
    char _pad_0C4A[0x2]; // offset 0xC4A
    int32 m_nKillingTeamNumber; // offset 0xC4C, size 0x4, align 4
    Vector m_vHomePosition; // offset 0xC50, size 0xC, align 4
    Vector m_vDropPosition; // offset 0xC5C, size 0xC, align 4
    GameTime_t m_tFirstPickupTime; // offset 0xC68, size 0x4, align 255
    char _pad_0C6C[0x48A4]; // offset 0xC6C
};
