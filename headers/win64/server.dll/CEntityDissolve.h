#pragma once

class CEntityDissolve : public CBaseModelEntity /*0x0*/  // sizeof 0x7B0, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x780]; // offset 0x0
    float32 m_flFadeInStart; // offset 0x780, size 0x4, align 4 | MNetworkEnable
    float32 m_flFadeInLength; // offset 0x784, size 0x4, align 4 | MNetworkEnable
    float32 m_flFadeOutModelStart; // offset 0x788, size 0x4, align 4 | MNetworkEnable
    float32 m_flFadeOutModelLength; // offset 0x78C, size 0x4, align 4 | MNetworkEnable
    float32 m_flFadeOutStart; // offset 0x790, size 0x4, align 4 | MNetworkEnable
    float32 m_flFadeOutLength; // offset 0x794, size 0x4, align 4 | MNetworkEnable
    GameTime_t m_flStartTime; // offset 0x798, size 0x4, align 255 | MNetworkEnable
    EntityDisolveType_t m_nDissolveType; // offset 0x79C, size 0x4, align 4 | MNetworkEnable
    Vector m_vDissolverOrigin; // offset 0x7A0, size 0xC, align 4 | MNetworkEnable
    uint32 m_nMagnitude; // offset 0x7AC, size 0x4, align 4 | MNetworkEnable
};
