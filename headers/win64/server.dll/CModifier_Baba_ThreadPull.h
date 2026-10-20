#pragma once

class CModifier_Baba_ThreadPull : public CCitadelModifier /*0x0*/  // sizeof 0x170, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x150]; // offset 0x0
    Vector m_vPullDisplacement; // offset 0x150, size 0xC, align 4
    float32 m_flLaunchUpSpeed; // offset 0x15C, size 0x4, align 4
    Vector m_vExitVelocity; // offset 0x160, size 0xC, align 4
    char _pad_016C[0x4]; // offset 0x16C
};
