#pragma once

class CEnvViewPunch : public CPointEntity /*0x0*/  // sizeof 0x4B8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A8]; // offset 0x0
    float32 m_flRadius; // offset 0x4A8, size 0x4, align 4
    QAngle m_angViewPunch; // offset 0x4AC, size 0xC, align 4
};
