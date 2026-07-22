#pragma once

struct BlendItem_t  // sizeof 0x40, align 0x8 (animgraphlib) {MGetKV3ClassDefaults}
{
    CUtlVector< TagSpan_t > m_tags; // offset 0x0, size 0x18, align 8
    CAnimUpdateNodeRef m_pChild; // offset 0x18, size 0x10, align 8
    HSequence m_hSequence; // offset 0x28, size 0x4, align 255
    Vector2D m_vPos; // offset 0x2C, size 0x8, align 4
    float32 m_flDuration; // offset 0x34, size 0x4, align 4
    bool m_bUseCustomDuration; // offset 0x38, size 0x1, align 1
    char _pad_0039[0x7]; // offset 0x39
};
