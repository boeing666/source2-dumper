#pragma once

class C_EnvironmentLight : public C_BarnLight /*0x0*/  // sizeof 0xED0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xEC0]; // offset 0x0
    Color m_SkyColor; // offset 0xEC0, size 0x4, align 4
    float32 m_flSkyIntensity; // offset 0xEC4, size 0x4, align 4
    Color m_SkyAmbientBounce; // offset 0xEC8, size 0x4, align 4
    float32 m_flAngularDiameter; // offset 0xECC, size 0x4, align 4
};
