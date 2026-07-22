#pragma once

class CEnvViewPunch : public CPointEntity /*0x0*/  // sizeof 0x4B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A0]; // offset 0x0
    float32 m_flRadius; // offset 0x4A0, size 0x4, align 4
    QAngle m_angViewPunch; // offset 0x4A4, size 0xC, align 4
};
