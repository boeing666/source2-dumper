#pragma once

class C_EnvironmentLight : public C_BarnLight /*0x0*/  // sizeof 0xF30, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xF20]; // offset 0x0
    Color m_SkyColor; // offset 0xF20, size 0x4, align 4
    float32 m_flSkyIntensity; // offset 0xF24, size 0x4, align 4
    Color m_SkyAmbientBounce; // offset 0xF28, size 0x4, align 4
    float32 m_flAngularDiameter; // offset 0xF2C, size 0x4, align 4
};
