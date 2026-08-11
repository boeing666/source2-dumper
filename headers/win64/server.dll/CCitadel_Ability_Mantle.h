#pragma once

class CCitadel_Ability_Mantle : public CCitadelBaseAbility /*0x0*/  // sizeof 0xFE8, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    float32 m_flVertOffset; // offset 0xF70, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    float32 m_flHorizGap; // offset 0xF74, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    Vector m_vStartPos; // offset 0xF78, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup
    Vector m_vTargetPos; // offset 0xF84, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup
    QAngle m_angFacing; // offset 0xF90, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup
    int32 m_nMantleTypeIndex; // offset 0xF9C, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flStartTime; // offset 0xFA0, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    char _pad_0FA4[0x44]; // offset 0xFA4
};
