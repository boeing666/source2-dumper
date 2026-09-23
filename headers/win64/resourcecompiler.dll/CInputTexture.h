#pragma once

class CInputTexture  // sizeof 0x58, align 0x8 (texturelib) {MGetKV3ClassDefaults}
{
public:
    CUtlString m_name; // offset 0x0, size 0x8, align 8
    CUtlString m_fileName; // offset 0x8, size 0x8, align 8
    CUtlString m_colorSpace; // offset 0x10, size 0x8, align 8
    CUtlString m_fileExt; // offset 0x18, size 0x8, align 8
    int32 m_nMinBitsPerChannel; // offset 0x20, size 0x4, align 4
    char _pad_0024[0x4]; // offset 0x24
    CUtlString m_typeString; // offset 0x28, size 0x8, align 8
    bool m_bPassThroughToCompiledVtex; // offset 0x30, size 0x1, align 1
    char _pad_0031[0x3]; // offset 0x31
    int32 m_n3DSliceCount; // offset 0x34, size 0x4, align 4
    int32 m_n3DSliceWidth; // offset 0x38, size 0x4, align 4
    int32 m_n3DSliceHeight; // offset 0x3C, size 0x4, align 4
    CUtlVector< CImageProcessor > m_imageProcessorArray; // offset 0x40, size 0x18, align 8
};
