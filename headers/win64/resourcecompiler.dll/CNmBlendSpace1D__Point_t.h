#pragma once

struct CNmBlendSpace1D::Point_t  // sizeof 0x20, align 0x8 (animdoclib) {MGetKV3ClassDefaults}
{
    CUtlString m_name; // offset 0x0, size 0x8, align 8
    float32 m_flValue; // offset 0x8, size 0x4, align 4
    V_uuid_t m_pinID; // offset 0xC, size 0x10, align 4 | MPropertySuppressField
    char _pad_001C[0x4]; // offset 0x1C
};
