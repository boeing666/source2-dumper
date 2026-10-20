#pragma once

class CCitadel_Ability_Necro_KillSummonTrigger : public CCitadelBaseTriggerAbility /*0x0*/  // sizeof 0x16E0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14B8]; // offset 0x0
    VectorWS m_vLaunchPosition; // offset 0x14B8, size 0xC, align 4
    QAngle m_qLaunchAngle; // offset 0x14C4, size 0xC, align 4
    char _pad_14D0[0x210]; // offset 0x14D0
};
