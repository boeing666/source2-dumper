#pragma once

class CCitadel_Ability_Artist_LionDance : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1798, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14AC]; // offset 0x0
    GameTime_t m_tEndTime; // offset 0x14AC, size 0x4, align 255
    GameTime_t m_tNextPulseTime; // offset 0x14B0, size 0x4, align 255
    bool m_bActive; // offset 0x14B4, size 0x1, align 1
    char _pad_14B5[0x3]; // offset 0x14B5
    int32 m_iRemainingShots; // offset 0x14B8, size 0x4, align 4
    VectorWS m_vLaunchPosition; // offset 0x14BC, size 0xC, align 4
    QAngle m_qLaunchAngle; // offset 0x14C8, size 0xC, align 4
    CHandle< CBaseEntity > m_pPointModifier; // offset 0x14D4, size 0x4, align 4
    char _pad_14D8[0x2C0]; // offset 0x14D8
};
