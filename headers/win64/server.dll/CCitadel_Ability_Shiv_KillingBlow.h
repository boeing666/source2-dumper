#pragma once

class CCitadel_Ability_Shiv_KillingBlow : public CCitadelBaseShivAbility /*0x0*/  // sizeof 0x1818, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_vHitEnts; // offset 0xF70, size 0x18, align 8
    char _pad_0F88[0x488]; // offset 0xF88
    bool m_bDamagedAnyHero; // offset 0x1410, size 0x1, align 1 | MNetworkEnable
    bool m_bActive; // offset 0x1411, size 0x1, align 1 | MNetworkEnable
    bool m_bStartedOnGround; // offset 0x1412, size 0x1, align 1 | MNetworkEnable
    bool m_bIsBonusCast; // offset 0x1413, size 0x1, align 1 | MNetworkEnable
    Vector m_vStartPosition; // offset 0x1414, size 0xC, align 4 | MNetworkEnable
    QAngle m_qCurrentAngles; // offset 0x1420, size 0xC, align 4 | MNetworkEnable
    char _pad_142C[0x4]; // offset 0x142C
    CCitadelAutoScaledTime m_flDepartureTime; // offset 0x1430, size 0x18, align 255 | MNetworkEnable
    CCitadelAutoScaledTime m_flArrivalTime; // offset 0x1448, size 0x18, align 255 | MNetworkEnable
    Vector m_vLastKnownSafePos; // offset 0x1460, size 0xC, align 4
    bool m_bMadeSlashParticle; // offset 0x146C, size 0x1, align 1
    char _pad_146D[0x3]; // offset 0x146D
    ParticleIndex_t m_ChannelParticle; // offset 0x1470, size 0x4, align 255
    GameTime_t m_flDrainSuppressEndTime; // offset 0x1474, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_flRecastWindowEnd; // offset 0x1478, size 0x4, align 255 | MNetworkEnable
    char _pad_147C[0x384]; // offset 0x147C
    CModifierHandleTyped< CCitadelModifier > m_BuffModifier; // offset 0x1800, size 0x18, align 8
};
