#pragma once

class CCitadel_Ability_Shiv_KillingBlow : public CCitadelBaseShivAbility /*0x0*/  // sizeof 0x21B0, align 0x8 [vtable] (client) {MModifierDynamicValuesSuppressCache}
{
public:
    char _pad_0000[0x16D8]; // offset 0x0
    CUtlVector< CHandle< C_BaseEntity > > m_vHitEnts; // offset 0x16D8, size 0x18, align 8
    char _pad_16F0[0x638]; // offset 0x16F0
    bool m_bDamagedAnyHero; // offset 0x1D28, size 0x1, align 1
    bool m_bActive; // offset 0x1D29, size 0x1, align 1
    bool m_bStartedOnGround; // offset 0x1D2A, size 0x1, align 1
    bool m_bIsBonusCast; // offset 0x1D2B, size 0x1, align 1
    VectorWS m_vStartPosition; // offset 0x1D2C, size 0xC, align 4
    QAngle m_qCurrentAngles; // offset 0x1D38, size 0xC, align 4
    char _pad_1D44[0x4]; // offset 0x1D44
    CCitadelAutoScaledTime m_flDepartureTime; // offset 0x1D48, size 0x18, align 255
    CCitadelAutoScaledTime m_flArrivalTime; // offset 0x1D60, size 0x18, align 255
    VectorWS m_vLastKnownSafePos; // offset 0x1D78, size 0xC, align 4
    bool m_bMadeSlashParticle; // offset 0x1D84, size 0x1, align 1
    char _pad_1D85[0x3]; // offset 0x1D85
    GameTime_t m_flRecastWindowEnd; // offset 0x1D88, size 0x4, align 255
    char _pad_1D8C[0x424]; // offset 0x1D8C
};
