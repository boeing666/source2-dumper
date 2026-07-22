#pragma once

class CEnvTilt : public CPointEntity /*0x0*/  // sizeof 0x4B8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A8]; // offset 0x0
    float32 m_Duration; // offset 0x4A8, size 0x4, align 4
    float32 m_Radius; // offset 0x4AC, size 0x4, align 4
    float32 m_TiltTime; // offset 0x4B0, size 0x4, align 4
    GameTime_t m_stopTime; // offset 0x4B4, size 0x4, align 255
};
