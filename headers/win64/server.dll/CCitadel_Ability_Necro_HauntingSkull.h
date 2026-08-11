#pragma once

class CCitadel_Ability_Necro_HauntingSkull : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1A18, align 0x8 [vtable] (server) {MNetworkVarNames}
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    GameTime_t m_tPriorityTargetTime; // offset 0xF70, size 0x4, align 255
    CHandle< CBaseEntity > m_eSkullPriorityTarget; // offset 0xF74, size 0x4, align 4
    VectorWS m_vLaunchPosition; // offset 0xF78, size 0xC, align 4
    QAngle m_qLaunchAngle; // offset 0xF84, size 0xC, align 4
    char _pad_0F90[0x1]; // offset 0xF90
    bool m_bIsFullyCharged; // offset 0xF91, size 0x1, align 1 | MNetworkEnable
    char _pad_0F92[0xA86]; // offset 0xF92
};
