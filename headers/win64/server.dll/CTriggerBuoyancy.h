#pragma once

class CTriggerBuoyancy : public CBaseTrigger /*0x0*/  // sizeof 0xAE8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x9C8]; // offset 0x0
    CBuoyancyHelper m_BuoyancyHelper; // offset 0x9C8, size 0x118, align 8
    float32 m_flFluidDensity; // offset 0xAE0, size 0x4, align 4
    char _pad_0AE4[0x4]; // offset 0xAE4
};
