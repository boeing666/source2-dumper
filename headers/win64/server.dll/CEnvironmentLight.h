#pragma once

class CEnvironmentLight : public CBarnLight /*0x0*/  // sizeof 0xB70, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB60]; // offset 0x0
    Color m_SkyColor; // offset 0xB60, size 0x4, align 4
    float32 m_flSkyIntensity; // offset 0xB64, size 0x4, align 4
    Color m_SkyAmbientBounce; // offset 0xB68, size 0x4, align 4
    float32 m_flAngularDiameter; // offset 0xB6C, size 0x4, align 4
};
