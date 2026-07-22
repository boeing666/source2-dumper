#pragma once

class CTextureSheetDoc_Frame  // sizeof 0x20, align 0x8 (texturelib) {MGetKV3ClassDefaults MPropertyAutoExpandSelf MPropertyCustomEditor}
{
public:
    CUtlString m_sImageName; // offset 0x0, size 0x8, align 8
    float32 m_fDisplayTime; // offset 0x8, size 0x4, align 4
    bool m_bCropEnabled; // offset 0xC, size 0x1, align 1
    char _pad_000D[0x3]; // offset 0xD
    int32 m_srcCropXStart; // offset 0x10, size 0x4, align 4
    int32 m_srcCropYStart; // offset 0x14, size 0x4, align 4
    int32 m_srcCropXEnd; // offset 0x18, size 0x4, align 4
    int32 m_srcCropYEnd; // offset 0x1C, size 0x4, align 4
};
