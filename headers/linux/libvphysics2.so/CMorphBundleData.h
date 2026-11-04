#pragma once

class CMorphBundleData  // sizeof 0x38, align 0x8 (modellib) {MGetKV3ClassDefaults}
{
public:
    float32 m_flULeftSrc; // offset 0x0, size 0x4, align 4
    float32 m_flVTopSrc; // offset 0x4, size 0x4, align 4
    CUtlVector< float32 > m_offsets; // offset 0x8, size 0x18, align 8
    CUtlVector< float32 > m_ranges; // offset 0x20, size 0x18, align 8
};
