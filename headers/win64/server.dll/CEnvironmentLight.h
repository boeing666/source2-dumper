#pragma once

class CEnvironmentLight : public CBarnLight /*0x0*/  // sizeof 0xBD0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBC0]; // offset 0x0
    Color m_SkyColor; // offset 0xBC0, size 0x4, align 4
    float32 m_flSkyIntensity; // offset 0xBC4, size 0x4, align 4
    Color m_SkyAmbientBounce; // offset 0xBC8, size 0x4, align 4
    float32 m_flAngularDiameter; // offset 0xBCC, size 0x4, align 4
};
