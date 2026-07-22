#pragma once

class CSpotlightEnd : public CBaseModelEntity /*0x0*/  // sizeof 0x7A0, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x780]; // offset 0x0
    float32 m_flLightScale; // offset 0x780, size 0x4, align 4 | MNetworkEnable
    float32 m_Radius; // offset 0x784, size 0x4, align 4 | MNetworkEnable
    Vector m_vSpotlightDir; // offset 0x788, size 0xC, align 4
    VectorWS m_vSpotlightOrg; // offset 0x794, size 0xC, align 4
};
