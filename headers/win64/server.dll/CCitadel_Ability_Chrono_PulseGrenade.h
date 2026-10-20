#pragma once

class CCitadel_Ability_Chrono_PulseGrenade : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1780, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A8]; // offset 0x0
    VectorWS m_vLaunchPosition; // offset 0x14A8, size 0xC, align 4
    QAngle m_qLaunchAngle; // offset 0x14B4, size 0xC, align 4
    char _pad_14C0[0x2C0]; // offset 0x14C0
};
