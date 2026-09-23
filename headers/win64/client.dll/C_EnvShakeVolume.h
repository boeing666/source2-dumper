#pragma once

class C_EnvShakeVolume : public C_BaseEntity /*0x0*/  // sizeof 0x650, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x618]; // offset 0x0
    Vector m_vBoxMins; // offset 0x618, size 0xC, align 4
    Vector m_vBoxMaxs; // offset 0x624, size 0xC, align 4
    float32 m_flAmplitude; // offset 0x630, size 0x4, align 4
    float32 m_flFrequency; // offset 0x634, size 0x4, align 4
    float32 m_flFalloffDistance; // offset 0x638, size 0x4, align 4
    float32 m_flRollScale; // offset 0x63C, size 0x4, align 4
    char _pad_0640[0x10]; // offset 0x640
};
