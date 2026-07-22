#pragma once

class CTriggerImpact : public CTriggerMultiple /*0x0*/  // sizeof 0xC18, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBE0]; // offset 0x0
    float32 m_flMagnitude; // offset 0xBE0, size 0x4, align 4
    float32 m_flNoise; // offset 0xBE4, size 0x4, align 4
    float32 m_flViewkick; // offset 0xBE8, size 0x4, align 4
    char _pad_0BEC[0x4]; // offset 0xBEC
    CEntityOutputTemplate< Vector > m_pOutputForce; // offset 0xBF0, size 0x28, align 8
};
