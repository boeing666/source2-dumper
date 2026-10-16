#pragma once

class CCitadel_Ability_Deadpack_Ultimate : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1D38, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16D8]; // offset 0x0
    EUltimateState_t m_eState; // offset 0x16D8, size 0x4, align 4
    GameTime_t m_tStateTimeBegin; // offset 0x16DC, size 0x4, align 255
    VectorWS m_vStateOriginBegin; // offset 0x16E0, size 0xC, align 4
    QAngle m_qStateAnglesBegin; // offset 0x16EC, size 0xC, align 4
    CHandle< C_BaseEntity > m_hTarget; // offset 0x16F8, size 0x4, align 4
    float32 m_flGoingUpTargetElevation; // offset 0x16FC, size 0x4, align 4
    GameTime_t m_tLastUpwardVelocityTime; // offset 0x1700, size 0x4, align 255
    bool m_bIsApproachingApex; // offset 0x1704, size 0x1, align 1
    char _pad_1705[0x633]; // offset 0x1705
};
