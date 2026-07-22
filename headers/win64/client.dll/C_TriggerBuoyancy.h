#pragma once

class C_TriggerBuoyancy : public C_BaseTrigger /*0x0*/  // sizeof 0x11B8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1098]; // offset 0x0
    CBuoyancyHelper m_BuoyancyHelper; // offset 0x1098, size 0x118, align 8
    float32 m_flFluidDensity; // offset 0x11B0, size 0x4, align 4
    char _pad_11B4[0x4]; // offset 0x11B4
};
