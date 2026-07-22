#pragma once

struct DecalGroupOption_t  // sizeof 0x20, align 0x8 (client) {MGetKV3ClassDefaults}
{
    CStrongHandleCopyable< InfoForResourceTypeIMaterial2 > m_hMaterial; // offset 0x0, size 0x8, align 8
    CGlobalSymbol m_sSequenceName; // offset 0x8, size 0x8, align 8
    float32 m_flProbability; // offset 0x10, size 0x4, align 4
    bool m_bEnableAngleBetweenNormalAndGravityRange; // offset 0x14, size 0x1, align 1
    char _pad_0015[0x3]; // offset 0x15
    float32 m_flMinAngleBetweenNormalAndGravity; // offset 0x18, size 0x4, align 4 | MPropertySuppressExpr
    float32 m_flMaxAngleBetweenNormalAndGravity; // offset 0x1C, size 0x4, align 4 | MPropertySuppressExpr
};
