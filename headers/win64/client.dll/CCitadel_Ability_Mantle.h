#pragma once

class CCitadel_Ability_Mantle : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1250, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x11D8]; // offset 0x0
    float32 m_flVertOffset; // offset 0x11D8, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    float32 m_flHorizGap; // offset 0x11DC, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    Vector m_vStartPos; // offset 0x11E0, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup
    Vector m_vTargetPos; // offset 0x11EC, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup
    QAngle m_angFacing; // offset 0x11F8, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup
    int32 m_nMantleTypeIndex; // offset 0x1204, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flStartTime; // offset 0x1208, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    char _pad_120C[0x44]; // offset 0x120C
};
