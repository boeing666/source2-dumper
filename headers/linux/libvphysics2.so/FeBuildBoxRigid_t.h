#pragma once

struct FeBuildBoxRigid_t : public FeBoxRigid_t /*0x0*/  // sizeof 0x40, align 0x10 [trivial_dtor] (physicslib) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x34]; // offset 0x0
    int32 m_nPriority; // offset 0x34, size 0x4, align 4
    uint32 m_nVertexMapHash; // offset 0x38, size 0x4, align 4
    uint32 m_nAntitunnelGroupBits; // offset 0x3C, size 0x4, align 4
};
