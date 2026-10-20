#pragma once

class CCitadel_Ability_Necro_KillSummonTrigger : public CCitadelBaseTriggerAbility /*0x0*/  // sizeof 0x1918, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16F0]; // offset 0x0
    VectorWS m_vLaunchPosition; // offset 0x16F0, size 0xC, align 4
    QAngle m_qLaunchAngle; // offset 0x16FC, size 0xC, align 4
    char _pad_1708[0x210]; // offset 0x1708
};
