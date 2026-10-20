#pragma once

class CCitadel_Ability_Priest_Flashbang : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1998, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A8]; // offset 0x0
    ShotID_t m_tInitialShotID; // offset 0x14A8, size 0x4, align 255
    VectorWS m_vLaunchPosition; // offset 0x14AC, size 0xC, align 4
    QAngle m_qLaunchAngle; // offset 0x14B8, size 0xC, align 4
    char _pad_14C4[0x4D4]; // offset 0x14C4
};
