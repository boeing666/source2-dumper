#pragma once

class CSpotlightEnd : public CBaseModelEntity /*0x0*/  // sizeof 0x8D8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8B8]; // offset 0x0
    float32 m_flLightScale; // offset 0x8B8, size 0x4, align 4
    float32 m_Radius; // offset 0x8BC, size 0x4, align 4
    Vector m_vSpotlightDir; // offset 0x8C0, size 0xC, align 4
    VectorWS m_vSpotlightOrg; // offset 0x8CC, size 0xC, align 4
};
