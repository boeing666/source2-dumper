#pragma once

class CMorphRectData  // sizeof 0x28, align 0x8 (modellib) {MGetKV3ClassDefaults}
{
public:
    int16 m_nXLeftDst; // offset 0x0, size 0x2, align 2
    int16 m_nYTopDst; // offset 0x2, size 0x2, align 2
    float32 m_flUWidthSrc; // offset 0x4, size 0x4, align 4
    float32 m_flVHeightSrc; // offset 0x8, size 0x4, align 4
    char _pad_000C[0x4]; // offset 0xC
    CUtlVector< CMorphBundleData > m_bundleDatas; // offset 0x10, size 0x18, align 8
};
