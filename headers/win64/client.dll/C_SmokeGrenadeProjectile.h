#pragma once

class C_SmokeGrenadeProjectile : public C_BaseCSGrenadeProjectile /*0x0*/  // sizeof 0x1418, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1278]; // offset 0x0
    int32 m_nSmokeEffectTickBegin; // offset 0x1278, size 0x4, align 4
    bool m_bDidSmokeEffect; // offset 0x127C, size 0x1, align 1
    char _pad_127D[0x3]; // offset 0x127D
    int32 m_nRandomSeed; // offset 0x1280, size 0x4, align 4
    Vector m_vSmokeColor; // offset 0x1284, size 0xC, align 4
    VectorWS m_vSmokeDetonationPos; // offset 0x1290, size 0xC, align 4
    char _pad_129C[0x4]; // offset 0x129C
    C_NetworkUtlVectorBase< uint8 > m_VoxelFrameData; // offset 0x12A0, size 0x18, align 8
    int32 m_nVoxelFrameDataSize; // offset 0x12B8, size 0x4, align 4
    int32 m_nVoxelUpdate; // offset 0x12BC, size 0x4, align 4
    bool m_bSmokeVolumeDataReceived; // offset 0x12C0, size 0x1, align 1
    bool m_bSmokeEffectSpawned; // offset 0x12C1, size 0x1, align 1
    char _pad_12C2[0x156]; // offset 0x12C2
};
