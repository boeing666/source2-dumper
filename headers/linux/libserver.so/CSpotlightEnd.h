#pragma once

class CSpotlightEnd : public CBaseModelEntity /*0x0*/  // sizeof 0xA78, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA54]; // offset 0x0
    float32 m_flLightScale; // offset 0xA54, size 0x4, align 4
    float32 m_Radius; // offset 0xA58, size 0x4, align 4
    Vector m_vSpotlightDir; // offset 0xA5C, size 0xC, align 4
    VectorWS m_vSpotlightOrg; // offset 0xA68, size 0xC, align 4
    char _pad_0A74[0x4]; // offset 0xA74
};
