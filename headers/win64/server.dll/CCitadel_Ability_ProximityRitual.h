#pragma once

class CCitadel_Ability_ProximityRitual : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1320, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    ECatStatueState_t m_eState; // offset 0xF70, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_0F71[0x3]; // offset 0xF71
    CHandle< CBaseEntity > m_hStatue; // offset 0xF74, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_tCatRecallTime; // offset 0xF78, size 0x4, align 255
    int32 m_iCatRecallHealth; // offset 0xF7C, size 0x4, align 4
    VectorWS m_vLaunchPosition; // offset 0xF80, size 0xC, align 4
    QAngle m_qLaunchAngle; // offset 0xF8C, size 0xC, align 4
    char _pad_0F98[0x388]; // offset 0xF98
};
