#pragma once

class CSpotlightEnd : public CBaseModelEntity /*0x0*/  // sizeof 0x878, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x858]; // offset 0x0
    float32 m_flLightScale; // offset 0x858, size 0x4, align 4
    float32 m_Radius; // offset 0x85C, size 0x4, align 4
    Vector m_vSpotlightDir; // offset 0x860, size 0xC, align 4
    VectorWS m_vSpotlightOrg; // offset 0x86C, size 0xC, align 4
};
