#pragma once

class CTriggerImpact : public CTriggerMultiple /*0x0*/  // sizeof 0x930, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8F8]; // offset 0x0
    float32 m_flMagnitude; // offset 0x8F8, size 0x4, align 4
    float32 m_flNoise; // offset 0x8FC, size 0x4, align 4
    float32 m_flViewkick; // offset 0x900, size 0x4, align 4
    char _pad_0904[0x4]; // offset 0x904
    CEntityOutputTemplate< Vector > m_pOutputForce; // offset 0x908, size 0x28, align 8
};
