#pragma once

class CCitadel_Ability_Chrono_PulseGrenade : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x19B0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16D8]; // offset 0x0
    VectorWS m_vLaunchPosition; // offset 0x16D8, size 0xC, align 4
    QAngle m_qLaunchAngle; // offset 0x16E4, size 0xC, align 4
    char _pad_16F0[0x2C0]; // offset 0x16F0
};
