#pragma once

class CCitadel_Ability_Priest_Flashbang : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1310, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    ShotID_t m_tInitialShotID; // offset 0xF70, size 0x4, align 255
    VectorWS m_vLaunchPosition; // offset 0xF74, size 0xC, align 4
    QAngle m_qLaunchAngle; // offset 0xF80, size 0xC, align 4
    char _pad_0F8C[0x384]; // offset 0xF8C
};
