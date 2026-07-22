#pragma once

struct ClutterSceneObject_t  // sizeof 0xB0, align 0x8 (worldrenderer) {MGetKV3ClassDefaults}
{
    AABB_t m_Bounds; // offset 0x0, size 0x18, align 255
    ObjectTypeFlags_t m_flags; // offset 0x18, size 0x4, align 4
    int16 m_nLayer; // offset 0x1C, size 0x2, align 2
    char _pad_001E[0x2]; // offset 0x1E
    CUtlVector< Vector > m_instancePositions; // offset 0x20, size 0x18, align 8
    char _pad_0038[0x18]; // offset 0x38
    CUtlVector< float32 > m_instanceScales; // offset 0x50, size 0x18, align 8
    CUtlVector< Color > m_instanceTintSrgb; // offset 0x68, size 0x18, align 8
    CUtlVector< ClutterTile_t > m_tiles; // offset 0x80, size 0x18, align 8
    CStrongHandle< InfoForResourceTypeCModel > m_renderableModel; // offset 0x98, size 0x8, align 8
    CUtlStringToken m_materialGroup; // offset 0xA0, size 0x4, align 4
    float32 m_flBeginCullSize; // offset 0xA4, size 0x4, align 4
    float32 m_flEndCullSize; // offset 0xA8, size 0x4, align 4
    char _pad_00AC[0x4]; // offset 0xAC
};
