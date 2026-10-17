#pragma once

class CTriggerImpact : public CTriggerMultiple /*0x0*/  // sizeof 0xA20, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x9E8]; // offset 0x0
    float32 m_flMagnitude; // offset 0x9E8, size 0x4, align 4
    float32 m_flNoise; // offset 0x9EC, size 0x4, align 4
    float32 m_flViewkick; // offset 0x9F0, size 0x4, align 4
    char _pad_09F4[0x4]; // offset 0x9F4
    CEntityOutputTemplate< Vector > m_pOutputForce; // offset 0x9F8, size 0x28, align 8
};
