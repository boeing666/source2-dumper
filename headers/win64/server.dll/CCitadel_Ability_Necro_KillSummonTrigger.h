#pragma once

class CCitadel_Ability_Necro_KillSummonTrigger : public CCitadelBaseTriggerAbility /*0x0*/  // sizeof 0x1118, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xF80]; // offset 0x0
    VectorWS m_vLaunchPosition; // offset 0xF80, size 0xC, align 4
    QAngle m_qLaunchAngle; // offset 0xF8C, size 0xC, align 4
    char _pad_0F98[0x180]; // offset 0xF98
};
