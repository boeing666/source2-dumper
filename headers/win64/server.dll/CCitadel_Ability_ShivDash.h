#pragma once

class CCitadel_Ability_ShivDash : public CCitadelBaseShivAbility /*0x0*/  // sizeof 0x1CC0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A0]; // offset 0x0
    VectorWS m_vStartPosition; // offset 0x14A0, size 0xC, align 4
    Vector m_vDashDirection; // offset 0x14AC, size 0xC, align 4
    bool m_bIsDashing; // offset 0x14B8, size 0x1, align 1
    char _pad_14B9[0x7]; // offset 0x14B9
    CUtlVector< CEntityIndex > m_vecHitEnemies; // offset 0x14C0, size 0x18, align 8
    VectorWS m_vecLastPosition; // offset 0x14D8, size 0xC, align 4
    int32 m_nReductionsLeft; // offset 0x14E4, size 0x4, align 4
    char _pad_14E8[0x790]; // offset 0x14E8
    GameTime_t m_flStuckTime; // offset 0x1C78, size 0x4, align 255
    char _pad_1C7C[0x14]; // offset 0x1C7C
    CHandle< CPointModifierThinker > m_hEchoThinker; // offset 0x1C90, size 0x4, align 4
    GameTime_t m_EchoStartTime; // offset 0x1C94, size 0x4, align 255
    bool m_bLetEchoPlay; // offset 0x1C98, size 0x1, align 1
    char _pad_1C99[0x1F]; // offset 0x1C99
    bool m_bDiscontinuityInEcho; // offset 0x1CB8, size 0x1, align 1
    char _pad_1CB9[0x7]; // offset 0x1CB9
};
