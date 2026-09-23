#pragma once

class CSmokeGrenadeProjectile : public CBaseCSGrenadeProjectile /*0x0*/  // sizeof 0x3120, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xE40]; // offset 0x0
    int32 m_nSmokeEffectTickBegin; // offset 0xE40, size 0x4, align 4
    bool m_bDidSmokeEffect; // offset 0xE44, size 0x1, align 1
    char _pad_0E45[0x3]; // offset 0xE45
    int32 m_nRandomSeed; // offset 0xE48, size 0x4, align 4
    Vector m_vSmokeColor; // offset 0xE4C, size 0xC, align 4
    VectorWS m_vSmokeDetonationPos; // offset 0xE58, size 0xC, align 4
    char _pad_0E64[0x4]; // offset 0xE64
    CNetworkUtlVectorBase< uint8 > m_VoxelFrameData; // offset 0xE68, size 0x18, align 8
    int32 m_nVoxelFrameDataSize; // offset 0xE80, size 0x4, align 4
    int32 m_nVoxelUpdate; // offset 0xE84, size 0x4, align 4
    GameTime_t m_flLastBounce; // offset 0xE88, size 0x4, align 255
    GameTime_t m_fllastSimulationTime; // offset 0xE8C, size 0x4, align 255
    char _pad_0E90[0x2280]; // offset 0xE90
    bool m_bExplodeFromInferno; // offset 0x3110, size 0x1, align 1
    bool m_bDidGroundScorch; // offset 0x3111, size 0x1, align 1
    char _pad_3112[0xE]; // offset 0x3112
};
