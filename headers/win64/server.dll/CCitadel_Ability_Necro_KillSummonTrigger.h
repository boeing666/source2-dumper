#pragma once

class CCitadel_Ability_Necro_KillSummonTrigger : public CCitadelBaseTriggerAbility /*0x0*/  // sizeof 0x16D8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14B0]; // offset 0x0
    VectorWS m_vLaunchPosition; // offset 0x14B0, size 0xC, align 4
    QAngle m_qLaunchAngle; // offset 0x14BC, size 0xC, align 4
    char _pad_14C8[0x210]; // offset 0x14C8
};
