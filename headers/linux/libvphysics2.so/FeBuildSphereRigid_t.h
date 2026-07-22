#pragma once

struct FeBuildSphereRigid_t : public FeSphereRigid_t /*0x0*/  // sizeof 0x30, align 0x10 [trivial_dtor] (physicslib) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x18]; // offset 0x0
    int32 m_nPriority; // offset 0x18, size 0x4, align 4
    uint32 m_nVertexMapHash; // offset 0x1C, size 0x4, align 4
    uint32 m_nAntitunnelGroupBits; // offset 0x20, size 0x4, align 4
    char _pad_0024[0xC]; // offset 0x24
};
