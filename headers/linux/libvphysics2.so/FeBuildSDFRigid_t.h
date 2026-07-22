#pragma once

struct FeBuildSDFRigid_t : public FeSDFRigid_t /*0x0*/  // sizeof 0x58, align 0x8 (physicslib) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x4C]; // offset 0x0
    int32 m_nPriority; // offset 0x4C, size 0x4, align 4
    uint32 m_nVertexMapHash; // offset 0x50, size 0x4, align 4
    uint32 m_nAntitunnelGroupBits; // offset 0x54, size 0x4, align 4
};
