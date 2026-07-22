#pragma once

class CSmokeGrenadeProjectile : public CBaseCSGrenadeProjectile /*0x0*/  // sizeof 0x3040, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xD60]; // offset 0x0
    int32 m_nSmokeEffectTickBegin; // offset 0xD60, size 0x4, align 4
    bool m_bDidSmokeEffect; // offset 0xD64, size 0x1, align 1
    char _pad_0D65[0x3]; // offset 0xD65
    int32 m_nRandomSeed; // offset 0xD68, size 0x4, align 4
    Vector m_vSmokeColor; // offset 0xD6C, size 0xC, align 4
    VectorWS m_vSmokeDetonationPos; // offset 0xD78, size 0xC, align 4
    char _pad_0D84[0x4]; // offset 0xD84
    CNetworkUtlVectorBase< uint8 > m_VoxelFrameData; // offset 0xD88, size 0x18, align 8
    int32 m_nVoxelFrameDataSize; // offset 0xDA0, size 0x4, align 4
    int32 m_nVoxelUpdate; // offset 0xDA4, size 0x4, align 4
    GameTime_t m_flLastBounce; // offset 0xDA8, size 0x4, align 255
    GameTime_t m_fllastSimulationTime; // offset 0xDAC, size 0x4, align 255
    char _pad_0DB0[0x2280]; // offset 0xDB0
    bool m_bExplodeFromInferno; // offset 0x3030, size 0x1, align 1
    bool m_bDidGroundScorch; // offset 0x3031, size 0x1, align 1
    char _pad_3032[0xE]; // offset 0x3032
};
