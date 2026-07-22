#pragma once

class CTriggerImpact : public CTriggerMultiple /*0x0*/  // sizeof 0xC10, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBD8]; // offset 0x0
    float32 m_flMagnitude; // offset 0xBD8, size 0x4, align 4
    float32 m_flNoise; // offset 0xBDC, size 0x4, align 4
    float32 m_flViewkick; // offset 0xBE0, size 0x4, align 4
    char _pad_0BE4[0x4]; // offset 0xBE4
    CEntityOutputTemplate< Vector > m_pOutputForce; // offset 0xBE8, size 0x28, align 8
};
