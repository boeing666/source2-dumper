#pragma once

class CSpotlightEnd : public CBaseModelEntity /*0x0*/  // sizeof 0x798, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    float32 m_flLightScale; // offset 0x778, size 0x4, align 4
    float32 m_Radius; // offset 0x77C, size 0x4, align 4
    Vector m_vSpotlightDir; // offset 0x780, size 0xC, align 4
    VectorWS m_vSpotlightOrg; // offset 0x78C, size 0xC, align 4
};
