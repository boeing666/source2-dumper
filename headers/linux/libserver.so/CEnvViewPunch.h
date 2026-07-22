#pragma once

class CEnvViewPunch : public CPointEntity /*0x0*/  // sizeof 0x798, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x788]; // offset 0x0
    float32 m_flRadius; // offset 0x788, size 0x4, align 4
    QAngle m_angViewPunch; // offset 0x78C, size 0xC, align 4
};
