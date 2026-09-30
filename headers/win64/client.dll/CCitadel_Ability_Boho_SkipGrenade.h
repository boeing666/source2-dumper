#pragma once

class CCitadel_Ability_Boho_SkipGrenade : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1A68, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16D8]; // offset 0x0
    ShotID_t m_tInitialShotID; // offset 0x16D8, size 0x4, align 255
    VectorWS m_vLaunchPosition; // offset 0x16DC, size 0xC, align 4
    QAngle m_qLaunchAngle; // offset 0x16E8, size 0xC, align 4
    char _pad_16F4[0x374]; // offset 0x16F4
};
