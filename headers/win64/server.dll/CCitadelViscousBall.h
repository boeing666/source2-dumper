#pragma once

class CCitadelViscousBall : public CCitadelModelEntity /*0x0*/  // sizeof 0x8F0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8E0]; // offset 0x0
    CHandle< CCitadelBaseAbility > m_hAbility; // offset 0x8E0, size 0x4, align 4
    float32 m_flBallRadius; // offset 0x8E4, size 0x4, align 4
    bool m_bNeedsPhysicsUpdate; // offset 0x8E8, size 0x1, align 1
    char _pad_08E9[0x7]; // offset 0x8E9
};
