#pragma once

struct FeBuildSDFRigid_t : public FeSDFRigid_t /*0x0*/  // sizeof 0x60, align 0x8 (physicslib) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x50]; // offset 0x0
    int32 m_nPriority; // offset 0x50, size 0x4, align 4
    uint32 m_nVertexMapHash; // offset 0x54, size 0x4, align 4
    uint32 m_nAntitunnelGroupBits; // offset 0x58, size 0x4, align 4
    char _pad_005C[0x4]; // offset 0x5C
};
