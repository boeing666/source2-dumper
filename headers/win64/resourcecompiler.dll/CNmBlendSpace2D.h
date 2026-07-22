#pragma once

class CNmBlendSpace2D  // sizeof 0x60, align 0x8 (animdoclib) {MGetKV3ClassDefaults}
{
public:
    CUtlVector< CUtlString > m_pointNames; // offset 0x0, size 0x18, align 8 | MPropertyAutoExpandSelf MPropertyResizable
    CUtlVector< Vector2D > m_points; // offset 0x18, size 0x18, align 8 | MPropertyAutoExpandSelf MPropertyResizable
    CUtlVector< uint8 > m_indices; // offset 0x30, size 0x18, align 8 | MPropertySuppressField
    CUtlVector< uint8 > m_hullIndices; // offset 0x48, size 0x18, align 8 | MPropertySuppressField
};
