#pragma once

class CCitadel_Ability_Priest_Flashbang : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1578, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x11D8]; // offset 0x0
    ShotID_t m_tInitialShotID; // offset 0x11D8, size 0x4, align 255
    VectorWS m_vLaunchPosition; // offset 0x11DC, size 0xC, align 4
    QAngle m_qLaunchAngle; // offset 0x11E8, size 0xC, align 4
    char _pad_11F4[0x384]; // offset 0x11F4
};
