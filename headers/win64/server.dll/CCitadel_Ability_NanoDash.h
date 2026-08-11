#pragma once

class CCitadel_Ability_NanoDash : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1658, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    Vector m_vStartPosition; // offset 0xF70, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup
    Vector m_vEndPosition; // offset 0xF7C, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup
    bool m_bIsDashing; // offset 0xF88, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_0F89[0x7]; // offset 0xF89
    CUtlVector< CEntityIndex > m_vecHitEnemies; // offset 0xF90, size 0x18, align 8
    Vector m_vecLastPosition; // offset 0xFA8, size 0xC, align 4
    char _pad_0FB4[0x684]; // offset 0xFB4
    GameTime_t m_flStuckTime; // offset 0x1638, size 0x4, align 255
    char _pad_163C[0x1C]; // offset 0x163C
};
