#pragma once

class CModifier_Baba_ThreadPull : public CCitadelModifier /*0x0*/  // sizeof 0x160, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x140]; // offset 0x0
    Vector m_vPullDisplacement; // offset 0x140, size 0xC, align 4
    float32 m_flLaunchUpSpeed; // offset 0x14C, size 0x4, align 4
    Vector m_vExitVelocity; // offset 0x150, size 0xC, align 4
    char _pad_015C[0x4]; // offset 0x15C
};
