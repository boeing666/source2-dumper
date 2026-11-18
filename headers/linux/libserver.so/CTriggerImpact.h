#pragma once

class CTriggerImpact : public CTriggerMultiple /*0x0*/  // sizeof 0xD60, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xD28]; // offset 0x0
    float32 m_flMagnitude; // offset 0xD28, size 0x4, align 4
    float32 m_flNoise; // offset 0xD2C, size 0x4, align 4
    float32 m_flViewkick; // offset 0xD30, size 0x4, align 4
    char _pad_0D34[0x4]; // offset 0xD34
    CEntityOutputTemplate< Vector > m_pOutputForce; // offset 0xD38, size 0x28, align 8
};
