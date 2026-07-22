#pragma once

class CTriggerBuoyancy : public CBaseTrigger /*0x0*/  // sizeof 0xCE0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBC0]; // offset 0x0
    CBuoyancyHelper m_BuoyancyHelper; // offset 0xBC0, size 0x118, align 8
    float32 m_flFluidDensity; // offset 0xCD8, size 0x4, align 4
    char _pad_0CDC[0x4]; // offset 0xCDC
};
