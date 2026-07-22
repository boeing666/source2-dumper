#pragma once

class C_CitadelViscousBall : public CCitadelModelEntity /*0x0*/  // sizeof 0x9C0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x9B0]; // offset 0x0
    CHandle< C_CitadelBaseAbility > m_hAbility; // offset 0x9B0, size 0x4, align 4
    float32 m_flBallRadius; // offset 0x9B4, size 0x4, align 4
    bool m_bNeedsPhysicsUpdate; // offset 0x9B8, size 0x1, align 1
    char _pad_09B9[0x7]; // offset 0x9B9
};
