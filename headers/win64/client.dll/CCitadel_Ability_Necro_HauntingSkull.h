#pragma once

class CCitadel_Ability_Necro_HauntingSkull : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1C80, align 0x8 [vtable] (client) {MNetworkVarNames}
{
public:
    char _pad_0000[0x11D8]; // offset 0x0
    GameTime_t m_tPriorityTargetTime; // offset 0x11D8, size 0x4, align 255
    CHandle< C_BaseEntity > m_eSkullPriorityTarget; // offset 0x11DC, size 0x4, align 4
    VectorWS m_vLaunchPosition; // offset 0x11E0, size 0xC, align 4
    QAngle m_qLaunchAngle; // offset 0x11EC, size 0xC, align 4
    char _pad_11F8[0x1]; // offset 0x11F8
    bool m_bIsFullyCharged; // offset 0x11F9, size 0x1, align 1 | MNetworkEnable
    char _pad_11FA[0xA86]; // offset 0x11FA
};
