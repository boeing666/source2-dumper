#pragma once

struct FeSDFRigid_t  // sizeof 0x50, align 0x8 (physicslib) {MGetKV3ClassDefaults}
{
    Vector vLocalMin; // offset 0x0, size 0xC, align 4
    Vector vLocalMax; // offset 0xC, size 0xC, align 4
    float32 flBounciness; // offset 0x18, size 0x4, align 4
    uint16 nNode; // offset 0x1C, size 0x2, align 2
    uint16 nCollisionMask; // offset 0x1E, size 0x2, align 2
    uint16 nVertexMapIndex; // offset 0x20, size 0x2, align 2
    uint16 nFlags; // offset 0x22, size 0x2, align 2
    char _pad_0024[0x4]; // offset 0x24
    CUtlVector< float32 > m_Distances; // offset 0x28, size 0x18, align 8
    int32 m_nWidth; // offset 0x40, size 0x4, align 4
    int32 m_nHeight; // offset 0x44, size 0x4, align 4
    int32 m_nDepth; // offset 0x48, size 0x4, align 4
    char _pad_004C[0x4]; // offset 0x4C
};
