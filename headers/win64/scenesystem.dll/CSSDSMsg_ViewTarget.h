#pragma once

class CSSDSMsg_ViewTarget  // sizeof 0x30, align 0x8 (scenesystem) {MGetKV3ClassDefaults}
{
public:
    CUtlString m_Name; // offset 0x0, size 0x8, align 8
    uint64 m_TextureId; // offset 0x8, size 0x8, align 8
    int32 m_nWidth; // offset 0x10, size 0x4, align 4
    int32 m_nHeight; // offset 0x14, size 0x4, align 4
    int32 m_nRequestedWidth; // offset 0x18, size 0x4, align 4
    int32 m_nRequestedHeight; // offset 0x1C, size 0x4, align 4
    int32 m_nNumMipLevels; // offset 0x20, size 0x4, align 4
    int32 m_nDepth; // offset 0x24, size 0x4, align 4
    int32 m_nMultisampleNumSamples; // offset 0x28, size 0x4, align 4
    int32 m_nFormat; // offset 0x2C, size 0x4, align 4
};
