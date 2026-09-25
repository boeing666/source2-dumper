#pragma once

class C_SmokeGrenadeProjectile : public C_BaseCSGrenadeProjectile /*0x0*/  // sizeof 0x1500, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1360]; // offset 0x0
    int32 m_nSmokeEffectTickBegin; // offset 0x1360, size 0x4, align 4
    bool m_bDidSmokeEffect; // offset 0x1364, size 0x1, align 1
    char _pad_1365[0x3]; // offset 0x1365
    int32 m_nRandomSeed; // offset 0x1368, size 0x4, align 4
    Vector m_vSmokeColor; // offset 0x136C, size 0xC, align 4
    VectorWS m_vSmokeDetonationPos; // offset 0x1378, size 0xC, align 4
    char _pad_1384[0x4]; // offset 0x1384
    C_NetworkUtlVectorBase< uint8 > m_VoxelFrameData; // offset 0x1388, size 0x18, align 8
    int32 m_nVoxelFrameDataSize; // offset 0x13A0, size 0x4, align 4
    int32 m_nVoxelUpdate; // offset 0x13A4, size 0x4, align 4
    uint8 m_nSmokeLightProbeRegen; // offset 0x13A8, size 0x1, align 1
    bool m_bSmokeVolumeDataReceived; // offset 0x13A9, size 0x1, align 1
    bool m_bSmokeEffectSpawned; // offset 0x13AA, size 0x1, align 1
    char _pad_13AB[0x155]; // offset 0x13AB
};
