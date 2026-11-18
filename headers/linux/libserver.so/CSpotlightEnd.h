#pragma once

class CSpotlightEnd : public CBaseModelEntity /*0x0*/  // sizeof 0xBC0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB9C]; // offset 0x0
    float32 m_flLightScale; // offset 0xB9C, size 0x4, align 4
    float32 m_Radius; // offset 0xBA0, size 0x4, align 4
    Vector m_vSpotlightDir; // offset 0xBA4, size 0xC, align 4
    VectorWS m_vSpotlightOrg; // offset 0xBB0, size 0xC, align 4
    char _pad_0BBC[0x4]; // offset 0xBBC
};
