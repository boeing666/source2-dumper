#pragma once

class CCitadel_Ability_Deadpack_Ultimate : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1DD8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A8]; // offset 0x0
    EUltimateState_t m_eState; // offset 0x14A8, size 0x4, align 4
    GameTime_t m_tStateTimeBegin; // offset 0x14AC, size 0x4, align 255
    VectorWS m_vStateOriginBegin; // offset 0x14B0, size 0xC, align 4
    QAngle m_qStateAnglesBegin; // offset 0x14BC, size 0xC, align 4
    CHandle< CBaseEntity > m_hTarget; // offset 0x14C8, size 0x4, align 4
    float32 m_flGoingUpTargetElevation; // offset 0x14CC, size 0x4, align 4
    GameTime_t m_tLastUpwardVelocityTime; // offset 0x14D0, size 0x4, align 255
    bool m_bIsApproachingApex; // offset 0x14D4, size 0x1, align 1
    char _pad_14D5[0x903]; // offset 0x14D5
};
