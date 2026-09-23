#pragma once

class CTriggerImpact : public CTriggerMultiple /*0x0*/  // sizeof 0xCF0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xCB8]; // offset 0x0
    float32 m_flMagnitude; // offset 0xCB8, size 0x4, align 4
    float32 m_flNoise; // offset 0xCBC, size 0x4, align 4
    float32 m_flViewkick; // offset 0xCC0, size 0x4, align 4
    char _pad_0CC4[0x4]; // offset 0xCC4
    CEntityOutputTemplate< Vector > m_pOutputForce; // offset 0xCC8, size 0x28, align 8
};
