#pragma once

class CVtex  // sizeof 0x80, align 0x8 (texturelib) {MGetKV3ClassDefaults}
{
public:
    CUtlVector< CInputTexture > m_inputTextureArray; // offset 0x0, size 0x18, align 8
    CUtlString m_outputTypeString; // offset 0x18, size 0x8, align 8
    CUtlString m_outputFormat; // offset 0x20, size 0x8, align 8
    Vector4D m_outputClearColor; // offset 0x28, size 0x10, align 4
    int32 m_nOutputMinDimension; // offset 0x38, size 0x4, align 4
    int32 m_nOutputMaxDimension; // offset 0x3C, size 0x4, align 4
    int32 m_nOutputDimensionReduce; // offset 0x40, size 0x4, align 4
    char _pad_0044[0x4]; // offset 0x44
    CUtlVector< CTextureOutputChannel > m_textureOutputChannelArray; // offset 0x48, size 0x18, align 8
    Vector m_vClamp; // offset 0x60, size 0xC, align 4
    bool m_bNoLod; // offset 0x6C, size 0x1, align 1
    bool m_bHiddenAssetFlag; // offset 0x6D, size 0x1, align 1
    bool m_bNormalizeRange; // offset 0x6E, size 0x1, align 1
    bool m_bVirtualTexture; // offset 0x6F, size 0x1, align 1
    int32 m_nDisplayRectWidth; // offset 0x70, size 0x4, align 4
    int32 m_nDisplayRectHeight; // offset 0x74, size 0x4, align 4
    int32 m_nMotionVectorsMaxDistanceInPixels; // offset 0x78, size 0x4, align 4
    char _pad_007C[0x4]; // offset 0x7C
};
