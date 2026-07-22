#pragma once

class CCitadel_Ability_ProximityRitual : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1588, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x11D8]; // offset 0x0
    ECatStatueState_t m_eState; // offset 0x11D8, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_11D9[0x3]; // offset 0x11D9
    CHandle< C_BaseEntity > m_hStatue; // offset 0x11DC, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    char _pad_11E0[0x8]; // offset 0x11E0
    VectorWS m_vLaunchPosition; // offset 0x11E8, size 0xC, align 4
    QAngle m_qLaunchAngle; // offset 0x11F4, size 0xC, align 4
    char _pad_1200[0x388]; // offset 0x1200
};
