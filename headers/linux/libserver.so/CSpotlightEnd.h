#pragma once

class CSpotlightEnd : public CBaseModelEntity /*0x0*/  // sizeof 0xB50, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB2C]; // offset 0x0
    float32 m_flLightScale; // offset 0xB2C, size 0x4, align 4
    float32 m_Radius; // offset 0xB30, size 0x4, align 4
    Vector m_vSpotlightDir; // offset 0xB34, size 0xC, align 4
    VectorWS m_vSpotlightOrg; // offset 0xB40, size 0xC, align 4
    char _pad_0B4C[0x4]; // offset 0xB4C
};
