#pragma once

class CCitadel_Ability_Shiv_KillingBlow : public CCitadelBaseShivAbility /*0x0*/  // sizeof 0x1A60, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x11D8]; // offset 0x0
    CUtlVector< CHandle< C_BaseEntity > > m_vHitEnts; // offset 0x11D8, size 0x18, align 8
    char _pad_11F0[0x488]; // offset 0x11F0
    bool m_bDamagedAnyHero; // offset 0x1678, size 0x1, align 1 | MNetworkEnable
    bool m_bActive; // offset 0x1679, size 0x1, align 1 | MNetworkEnable
    bool m_bStartedOnGround; // offset 0x167A, size 0x1, align 1 | MNetworkEnable
    bool m_bIsBonusCast; // offset 0x167B, size 0x1, align 1 | MNetworkEnable
    Vector m_vStartPosition; // offset 0x167C, size 0xC, align 4 | MNetworkEnable
    QAngle m_qCurrentAngles; // offset 0x1688, size 0xC, align 4 | MNetworkEnable
    char _pad_1694[0x4]; // offset 0x1694
    CCitadelAutoScaledTime m_flDepartureTime; // offset 0x1698, size 0x18, align 255 | MNetworkEnable
    CCitadelAutoScaledTime m_flArrivalTime; // offset 0x16B0, size 0x18, align 255 | MNetworkEnable
    Vector m_vLastKnownSafePos; // offset 0x16C8, size 0xC, align 4
    bool m_bMadeSlashParticle; // offset 0x16D4, size 0x1, align 1
    char _pad_16D5[0x3]; // offset 0x16D5
    GameTime_t m_flDrainSuppressEndTime; // offset 0x16D8, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_flRecastWindowEnd; // offset 0x16DC, size 0x4, align 255 | MNetworkEnable
    char _pad_16E0[0x380]; // offset 0x16E0
};
