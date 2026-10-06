#pragma once

class CModifier_Baba_ThreadPull : public CCitadelModifier /*0x0*/  // sizeof 0x168, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x148]; // offset 0x0
    Vector m_vPullDisplacement; // offset 0x148, size 0xC, align 4
    float32 m_flLaunchUpSpeed; // offset 0x154, size 0x4, align 4
    Vector m_vExitVelocity; // offset 0x158, size 0xC, align 4
    char _pad_0164[0x4]; // offset 0x164
};
