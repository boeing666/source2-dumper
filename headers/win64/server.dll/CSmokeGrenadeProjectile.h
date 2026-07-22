#pragma once

class CSmokeGrenadeProjectile : public CBaseCSGrenadeProjectile /*0x0*/  // sizeof 0x2D60, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xA88]; // offset 0x0
    int32 m_nSmokeEffectTickBegin; // offset 0xA88, size 0x4, align 4
    bool m_bDidSmokeEffect; // offset 0xA8C, size 0x1, align 1
    char _pad_0A8D[0x3]; // offset 0xA8D
    int32 m_nRandomSeed; // offset 0xA90, size 0x4, align 4
    Vector m_vSmokeColor; // offset 0xA94, size 0xC, align 4
    VectorWS m_vSmokeDetonationPos; // offset 0xAA0, size 0xC, align 4
    char _pad_0AAC[0x4]; // offset 0xAAC
    CNetworkUtlVectorBase< uint8 > m_VoxelFrameData; // offset 0xAB0, size 0x18, align 8
    int32 m_nVoxelFrameDataSize; // offset 0xAC8, size 0x4, align 4
    int32 m_nVoxelUpdate; // offset 0xACC, size 0x4, align 4
    GameTime_t m_flLastBounce; // offset 0xAD0, size 0x4, align 255
    GameTime_t m_fllastSimulationTime; // offset 0xAD4, size 0x4, align 255
    char _pad_0AD8[0x2280]; // offset 0xAD8
    bool m_bExplodeFromInferno; // offset 0x2D58, size 0x1, align 1
    bool m_bDidGroundScorch; // offset 0x2D59, size 0x1, align 1
    char _pad_2D5A[0x6]; // offset 0x2D5A
};
