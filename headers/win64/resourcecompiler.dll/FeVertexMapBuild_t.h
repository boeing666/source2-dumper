#pragma once

struct FeVertexMapBuild_t  // sizeof 0x30, align 0x8 (physicslib) {MGetKV3ClassDefaults}
{
    CUtlString m_VertexMapName; // offset 0x0, size 0x8, align 8
    uint32 m_nNameHash; // offset 0x8, size 0x4, align 4
    Color m_Color; // offset 0xC, size 0x4, align 1
    float32 m_flVolumetricSolveStrength; // offset 0x10, size 0x4, align 4
    int32 m_nScaleSourceNode; // offset 0x14, size 0x4, align 4
    CUtlVector< float32 > m_Weights; // offset 0x18, size 0x18, align 8
};
