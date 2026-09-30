#pragma once

class CTriggerImpact : public CTriggerMultiple /*0x0*/  // sizeof 0xA40, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA08]; // offset 0x0
    float32 m_flMagnitude; // offset 0xA08, size 0x4, align 4
    float32 m_flNoise; // offset 0xA0C, size 0x4, align 4
    float32 m_flViewkick; // offset 0xA10, size 0x4, align 4
    char _pad_0A14[0x4]; // offset 0xA14
    CEntityOutputTemplate< Vector > m_pOutputForce; // offset 0xA18, size 0x28, align 8
};
