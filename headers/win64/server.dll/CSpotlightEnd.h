#pragma once

class CSpotlightEnd : public CBaseModelEntity /*0x0*/  // sizeof 0x790, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x770]; // offset 0x0
    float32 m_flLightScale; // offset 0x770, size 0x4, align 4
    float32 m_Radius; // offset 0x774, size 0x4, align 4
    Vector m_vSpotlightDir; // offset 0x778, size 0xC, align 4
    VectorWS m_vSpotlightOrg; // offset 0x784, size 0xC, align 4
};
