#pragma once

class CCitadel_Ability_Priest_Flashbang : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1BD0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16E0]; // offset 0x0
    ShotID_t m_tInitialShotID; // offset 0x16E0, size 0x4, align 255
    VectorWS m_vLaunchPosition; // offset 0x16E4, size 0xC, align 4
    QAngle m_qLaunchAngle; // offset 0x16F0, size 0xC, align 4
    char _pad_16FC[0x4D4]; // offset 0x16FC
};
