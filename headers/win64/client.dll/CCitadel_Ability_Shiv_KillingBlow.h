#pragma once

class CCitadel_Ability_Shiv_KillingBlow : public CCitadelBaseShivAbility /*0x0*/  // sizeof 0x21B8, align 0x8 [vtable] (client) {MModifierDynamicValuesSuppressCache}
{
public:
    char _pad_0000[0x16E0]; // offset 0x0
    CUtlVector< CHandle< C_BaseEntity > > m_vHitEnts; // offset 0x16E0, size 0x18, align 8
    char _pad_16F8[0x638]; // offset 0x16F8
    bool m_bDamagedAnyHero; // offset 0x1D30, size 0x1, align 1
    bool m_bActive; // offset 0x1D31, size 0x1, align 1
    bool m_bStartedOnGround; // offset 0x1D32, size 0x1, align 1
    bool m_bIsBonusCast; // offset 0x1D33, size 0x1, align 1
    VectorWS m_vStartPosition; // offset 0x1D34, size 0xC, align 4
    QAngle m_qCurrentAngles; // offset 0x1D40, size 0xC, align 4
    char _pad_1D4C[0x4]; // offset 0x1D4C
    CCitadelAutoScaledTime m_flDepartureTime; // offset 0x1D50, size 0x18, align 255
    CCitadelAutoScaledTime m_flArrivalTime; // offset 0x1D68, size 0x18, align 255
    VectorWS m_vLastKnownSafePos; // offset 0x1D80, size 0xC, align 4
    bool m_bMadeSlashParticle; // offset 0x1D8C, size 0x1, align 1
    char _pad_1D8D[0x3]; // offset 0x1D8D
    GameTime_t m_flRecastWindowEnd; // offset 0x1D90, size 0x4, align 255
    char _pad_1D94[0x424]; // offset 0x1D94
};
