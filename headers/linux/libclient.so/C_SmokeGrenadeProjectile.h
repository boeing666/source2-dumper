#pragma once

class C_SmokeGrenadeProjectile : public C_BaseCSGrenadeProjectile /*0x0*/  // sizeof 0x13A0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1200]; // offset 0x0
    int32 m_nSmokeEffectTickBegin; // offset 0x1200, size 0x4, align 4
    bool m_bDidSmokeEffect; // offset 0x1204, size 0x1, align 1
    char _pad_1205[0x3]; // offset 0x1205
    int32 m_nRandomSeed; // offset 0x1208, size 0x4, align 4
    Vector m_vSmokeColor; // offset 0x120C, size 0xC, align 4
    VectorWS m_vSmokeDetonationPos; // offset 0x1218, size 0xC, align 4
    char _pad_1224[0x4]; // offset 0x1224
    C_NetworkUtlVectorBase< uint8 > m_VoxelFrameData; // offset 0x1228, size 0x18, align 8
    int32 m_nVoxelFrameDataSize; // offset 0x1240, size 0x4, align 4
    int32 m_nVoxelUpdate; // offset 0x1244, size 0x4, align 4
    bool m_bSmokeVolumeDataReceived; // offset 0x1248, size 0x1, align 1
    bool m_bSmokeEffectSpawned; // offset 0x1249, size 0x1, align 1
    char _pad_124A[0x156]; // offset 0x124A
};
