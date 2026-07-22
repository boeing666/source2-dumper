#pragma once

struct OldFeEdge_t  // sizeof 0x48, align 0x4 [trivial_dtor] (physicslib) {MGetKV3ClassDefaults}
{
    float32[3] m_flK; // offset 0x0, size 0xC, align 4
    float32 invA; // offset 0xC, size 0x4, align 4
    float32 t; // offset 0x10, size 0x4, align 4
    float32 flThetaRelaxed; // offset 0x14, size 0x4, align 4
    float32 flThetaFactor; // offset 0x18, size 0x4, align 4
    float32 c01; // offset 0x1C, size 0x4, align 4
    float32 c02; // offset 0x20, size 0x4, align 4
    float32 c03; // offset 0x24, size 0x4, align 4
    float32 c04; // offset 0x28, size 0x4, align 4
    float32 flAxialModelDist; // offset 0x2C, size 0x4, align 4
    float32[4] flAxialModelWeights; // offset 0x30, size 0x10, align 4
    uint16[4] m_nNode; // offset 0x40, size 0x8, align 2
};
