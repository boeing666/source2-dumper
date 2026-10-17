#pragma once

class CSpotlightEnd : public CBaseModelEntity /*0x0*/  // sizeof 0xB58, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB34]; // offset 0x0
    float32 m_flLightScale; // offset 0xB34, size 0x4, align 4
    float32 m_Radius; // offset 0xB38, size 0x4, align 4
    Vector m_vSpotlightDir; // offset 0xB3C, size 0xC, align 4
    VectorWS m_vSpotlightOrg; // offset 0xB48, size 0xC, align 4
    char _pad_0B54[0x4]; // offset 0xB54
};
