#pragma once

class CCitadel_Ability_Necro_HauntingSkull : public CCitadelBaseAbility /*0x0*/  // sizeof 0x2340, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A8]; // offset 0x0
    GameTime_t m_tPriorityTargetTime; // offset 0x14A8, size 0x4, align 255
    CHandle< CBaseEntity > m_eSkullPriorityTarget; // offset 0x14AC, size 0x4, align 4
    VectorWS m_vLaunchPosition; // offset 0x14B0, size 0xC, align 4
    QAngle m_qLaunchAngle; // offset 0x14BC, size 0xC, align 4
    char _pad_14C8[0x1]; // offset 0x14C8
    bool m_bIsFullyCharged; // offset 0x14C9, size 0x1, align 1
    char _pad_14CA[0xE76]; // offset 0x14CA
};
