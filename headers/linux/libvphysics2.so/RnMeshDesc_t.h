#pragma once

struct RnMeshDesc_t : public RnShapeDesc_t /*0x0*/  // sizeof 0xD8, align 0x8 (physicslib) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x18]; // offset 0x0
    RnMesh_t m_Mesh; // offset 0x18, size 0xC0, align 8
};
