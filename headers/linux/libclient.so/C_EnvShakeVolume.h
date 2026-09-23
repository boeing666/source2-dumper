#pragma once

class C_EnvShakeVolume : public C_BaseEntity /*0x0*/  // sizeof 0x7D0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x798]; // offset 0x0
    Vector m_vBoxMins; // offset 0x798, size 0xC, align 4
    Vector m_vBoxMaxs; // offset 0x7A4, size 0xC, align 4
    float32 m_flAmplitude; // offset 0x7B0, size 0x4, align 4
    float32 m_flFrequency; // offset 0x7B4, size 0x4, align 4
    float32 m_flFalloffDistance; // offset 0x7B8, size 0x4, align 4
    float32 m_flRollScale; // offset 0x7BC, size 0x4, align 4
    char _pad_07C0[0x10]; // offset 0x7C0
};
