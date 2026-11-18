#pragma once

struct FeModelDeformer_t  // sizeof 0x40, align 0x4 [trivial_dtor] (physicslib) {MGetKV3ClassDefaults}
{
    FeModelDeformer_t::FfdLayerZ_t[3] m_FfdZLayers; // offset 0x0, size 0x30, align 4
    float32 m_flDisplayRadius; // offset 0x30, size 0x4, align 4
    uint32 m_nVertexMapNameHash; // offset 0x34, size 0x4, align 4
    uint16 m_nVertexMapIndex; // offset 0x38, size 0x2, align 2
    uint16 m_nReferenceNode; // offset 0x3A, size 0x2, align 2
    uint32 m_nFlags; // offset 0x3C, size 0x4, align 4
};
