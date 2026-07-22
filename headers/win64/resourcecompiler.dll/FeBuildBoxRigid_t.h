#pragma once

struct FeBuildBoxRigid_t : public FeBoxRigid_t /*0x0*/  // sizeof 0x50, align 0x10 [trivial_dtor] (physicslib) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x40]; // offset 0x0
    int32 m_nPriority; // offset 0x40, size 0x4, align 4
    uint32 m_nVertexMapHash; // offset 0x44, size 0x4, align 4
    uint32 m_nAntitunnelGroupBits; // offset 0x48, size 0x4, align 4
    char _pad_004C[0x4]; // offset 0x4C
};
