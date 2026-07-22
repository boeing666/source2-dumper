#pragma once

class CTriggerImpact : public CTriggerMultiple /*0x0*/  // sizeof 0x940, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x908]; // offset 0x0
    float32 m_flMagnitude; // offset 0x908, size 0x4, align 4
    float32 m_flNoise; // offset 0x90C, size 0x4, align 4
    float32 m_flViewkick; // offset 0x910, size 0x4, align 4
    char _pad_0914[0x4]; // offset 0x914
    CEntityOutputTemplate< Vector > m_pOutputForce; // offset 0x918, size 0x28, align 8
};
