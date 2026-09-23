#pragma once

class CTextureOutputChannel  // sizeof 0x50, align 0x8 (texturelib) {MGetKV3ClassDefaults}
{
public:
    CUtlString m_srcChannels; // offset 0x0, size 0x8, align 8
    CUtlString m_dstChannels; // offset 0x8, size 0x8, align 8
    CImageProcessor m_mipAlgorithm; // offset 0x10, size 0x20, align 8
    CUtlString m_outputColorSpace; // offset 0x30, size 0x8, align 8
    CUtlVector< CUtlString > m_inputTextureArray; // offset 0x38, size 0x18, align 8
};
