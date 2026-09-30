#pragma once

class CCitadel_Ability_ProximityRitual : public CCitadelBaseAbility /*0x0*/  // sizeof 0x19A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A0]; // offset 0x0
    ECatStatueState_t m_eState; // offset 0x14A0, size 0x1, align 1
    char _pad_14A1[0x3]; // offset 0x14A1
    CHandle< CBaseEntity > m_hStatue; // offset 0x14A4, size 0x4, align 4
    GameTime_t m_tCatRecallTime; // offset 0x14A8, size 0x4, align 255
    int32 m_iCatRecallHealth; // offset 0x14AC, size 0x4, align 4
    VectorWS m_vLaunchPosition; // offset 0x14B0, size 0xC, align 4
    QAngle m_qLaunchAngle; // offset 0x14BC, size 0xC, align 4
    char _pad_14C8[0x4D8]; // offset 0x14C8
};
