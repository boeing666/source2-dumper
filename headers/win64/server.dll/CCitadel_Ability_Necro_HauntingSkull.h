#pragma once

class CCitadel_Ability_Necro_HauntingSkull : public CCitadelBaseAbility /*0x0*/  // sizeof 0x2338, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A0]; // offset 0x0
    GameTime_t m_tPriorityTargetTime; // offset 0x14A0, size 0x4, align 255
    CHandle< CBaseEntity > m_eSkullPriorityTarget; // offset 0x14A4, size 0x4, align 4
    VectorWS m_vLaunchPosition; // offset 0x14A8, size 0xC, align 4
    QAngle m_qLaunchAngle; // offset 0x14B4, size 0xC, align 4
    char _pad_14C0[0x1]; // offset 0x14C0
    bool m_bIsFullyCharged; // offset 0x14C1, size 0x1, align 1
    char _pad_14C2[0xE76]; // offset 0x14C2
};
