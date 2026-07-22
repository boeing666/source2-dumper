#pragma once

class CCitadel_Ability_Necro_KillSummonTrigger : public CCitadelBaseTriggerAbility /*0x0*/  // sizeof 0x1380, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x11E8]; // offset 0x0
    VectorWS m_vLaunchPosition; // offset 0x11E8, size 0xC, align 4
    QAngle m_qLaunchAngle; // offset 0x11F4, size 0xC, align 4
    char _pad_1200[0x180]; // offset 0x1200
};
