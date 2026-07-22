#pragma once

class CCitadel_Ability_ShivDash : public CCitadelBaseShivAbility /*0x0*/  // sizeof 0x17B8, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x11D8]; // offset 0x0
    Vector m_vStartPosition; // offset 0x11D8, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup
    Vector m_vDashDirection; // offset 0x11E4, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup
    bool m_bIsDashing; // offset 0x11F0, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_11F1[0x7]; // offset 0x11F1
    CUtlVector< CEntityIndex > m_vecHitEnemies; // offset 0x11F8, size 0x18, align 8
    Vector m_vecLastPosition; // offset 0x1210, size 0xC, align 4
    int32 m_nReductionsLeft; // offset 0x121C, size 0x4, align 4
    char _pad_1220[0x580]; // offset 0x1220
    GameTime_t m_flStuckTime; // offset 0x17A0, size 0x4, align 255
    char _pad_17A4[0x14]; // offset 0x17A4
};
