#pragma once

class C_EntityDissolve : public C_BaseModelEntity /*0x0*/  // sizeof 0x9F0, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x9B0]; // offset 0x0
    GameTime_t m_flStartTime; // offset 0x9B0, size 0x4, align 255 | MNetworkEnable MNotSaved
    float32 m_flFadeInStart; // offset 0x9B4, size 0x4, align 4 | MNetworkEnable MNotSaved
    float32 m_flFadeInLength; // offset 0x9B8, size 0x4, align 4 | MNetworkEnable MNotSaved
    float32 m_flFadeOutModelStart; // offset 0x9BC, size 0x4, align 4 | MNetworkEnable MNotSaved
    float32 m_flFadeOutModelLength; // offset 0x9C0, size 0x4, align 4 | MNetworkEnable MNotSaved
    float32 m_flFadeOutStart; // offset 0x9C4, size 0x4, align 4 | MNetworkEnable MNotSaved
    float32 m_flFadeOutLength; // offset 0x9C8, size 0x4, align 4 | MNetworkEnable MNotSaved
    GameTime_t m_flNextSparkTime; // offset 0x9CC, size 0x4, align 255 | MNotSaved
    EntityDisolveType_t m_nDissolveType; // offset 0x9D0, size 0x4, align 4 | MNetworkEnable MNotSaved
    Vector m_vDissolverOrigin; // offset 0x9D4, size 0xC, align 4 | MNetworkEnable MNotSaved
    uint32 m_nMagnitude; // offset 0x9E0, size 0x4, align 4 | MNetworkEnable MNotSaved
    bool m_bCoreExplode; // offset 0x9E4, size 0x1, align 1 | MNotSaved
    bool m_bLinkedToServerEnt; // offset 0x9E5, size 0x1, align 1 | MNotSaved
    char _pad_09E6[0xA]; // offset 0x9E6
};
