#pragma once

class CCitadel_Ability_ShivDash : public CCitadelBaseShivAbility /*0x0*/  // sizeof 0x1580, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    Vector m_vStartPosition; // offset 0xF70, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup
    Vector m_vDashDirection; // offset 0xF7C, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup
    bool m_bIsDashing; // offset 0xF88, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_0F89[0x7]; // offset 0xF89
    CUtlVector< CEntityIndex > m_vecHitEnemies; // offset 0xF90, size 0x18, align 8
    Vector m_vecLastPosition; // offset 0xFA8, size 0xC, align 4
    int32 m_nReductionsLeft; // offset 0xFB4, size 0x4, align 4
    char _pad_0FB8[0x580]; // offset 0xFB8
    GameTime_t m_flStuckTime; // offset 0x1538, size 0x4, align 255
    char _pad_153C[0x14]; // offset 0x153C
    CHandle< CPointModifierThinker > m_hEchoThinker; // offset 0x1550, size 0x4, align 4
    GameTime_t m_EchoStartTime; // offset 0x1554, size 0x4, align 255
    bool m_bLetEchoPlay; // offset 0x1558, size 0x1, align 1
    char _pad_1559[0x1F]; // offset 0x1559
    bool m_bDiscontinuityInEcho; // offset 0x1578, size 0x1, align 1
    char _pad_1579[0x7]; // offset 0x1579
};
