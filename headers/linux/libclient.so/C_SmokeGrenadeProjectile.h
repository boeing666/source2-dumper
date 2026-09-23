#pragma once

class C_SmokeGrenadeProjectile : public C_BaseCSGrenadeProjectile /*0x0*/  // sizeof 0x1488, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x12E8]; // offset 0x0
    int32 m_nSmokeEffectTickBegin; // offset 0x12E8, size 0x4, align 4
    bool m_bDidSmokeEffect; // offset 0x12EC, size 0x1, align 1
    char _pad_12ED[0x3]; // offset 0x12ED
    int32 m_nRandomSeed; // offset 0x12F0, size 0x4, align 4
    Vector m_vSmokeColor; // offset 0x12F4, size 0xC, align 4
    VectorWS m_vSmokeDetonationPos; // offset 0x1300, size 0xC, align 4
    char _pad_130C[0x4]; // offset 0x130C
    C_NetworkUtlVectorBase< uint8 > m_VoxelFrameData; // offset 0x1310, size 0x18, align 8
    int32 m_nVoxelFrameDataSize; // offset 0x1328, size 0x4, align 4
    int32 m_nVoxelUpdate; // offset 0x132C, size 0x4, align 4
    bool m_bSmokeVolumeDataReceived; // offset 0x1330, size 0x1, align 1
    bool m_bSmokeEffectSpawned; // offset 0x1331, size 0x1, align 1
    char _pad_1332[0x156]; // offset 0x1332
};
