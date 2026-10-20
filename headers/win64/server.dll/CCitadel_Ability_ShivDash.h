#pragma once

class CCitadel_Ability_ShivDash : public CCitadelBaseShivAbility /*0x0*/  // sizeof 0x1CC8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A8]; // offset 0x0
    VectorWS m_vStartPosition; // offset 0x14A8, size 0xC, align 4
    Vector m_vDashDirection; // offset 0x14B4, size 0xC, align 4
    bool m_bIsDashing; // offset 0x14C0, size 0x1, align 1
    char _pad_14C1[0x7]; // offset 0x14C1
    CUtlVector< CEntityIndex > m_vecHitEnemies; // offset 0x14C8, size 0x18, align 8
    VectorWS m_vecLastPosition; // offset 0x14E0, size 0xC, align 4
    int32 m_nReductionsLeft; // offset 0x14EC, size 0x4, align 4
    char _pad_14F0[0x790]; // offset 0x14F0
    GameTime_t m_flStuckTime; // offset 0x1C80, size 0x4, align 255
    char _pad_1C84[0x14]; // offset 0x1C84
    CHandle< CPointModifierThinker > m_hEchoThinker; // offset 0x1C98, size 0x4, align 4
    GameTime_t m_EchoStartTime; // offset 0x1C9C, size 0x4, align 255
    bool m_bLetEchoPlay; // offset 0x1CA0, size 0x1, align 1
    char _pad_1CA1[0x1F]; // offset 0x1CA1
    bool m_bDiscontinuityInEcho; // offset 0x1CC0, size 0x1, align 1
    char _pad_1CC1[0x7]; // offset 0x1CC1
};
