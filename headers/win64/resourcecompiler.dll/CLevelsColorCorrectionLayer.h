#pragma once

class CLevelsColorCorrectionLayer : public CColorCorrectionLayer /*0x0*/  // sizeof 0x78, align 0x8 [vtable] (resourcecompiler) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    int32 m_nInputBlackPointRGB; // offset 0x28, size 0x4, align 4
    int32 m_nInputBlackPointR; // offset 0x2C, size 0x4, align 4
    int32 m_nInputBlackPointG; // offset 0x30, size 0x4, align 4
    int32 m_nInputBlackPointB; // offset 0x34, size 0x4, align 4
    int32 m_nInputWhitePointRGB; // offset 0x38, size 0x4, align 4
    int32 m_nInputWhitePointR; // offset 0x3C, size 0x4, align 4
    int32 m_nInputWhitePointG; // offset 0x40, size 0x4, align 4
    int32 m_nInputWhitePointB; // offset 0x44, size 0x4, align 4
    int32 m_nOutputBlackPointRGB; // offset 0x48, size 0x4, align 4
    int32 m_nOutputBlackPointR; // offset 0x4C, size 0x4, align 4
    int32 m_nOutputBlackPointG; // offset 0x50, size 0x4, align 4
    int32 m_nOutputBlackPointB; // offset 0x54, size 0x4, align 4
    int32 m_nOutputWhitePointRGB; // offset 0x58, size 0x4, align 4
    int32 m_nOutputWhitePointR; // offset 0x5C, size 0x4, align 4
    int32 m_nOutputWhitePointG; // offset 0x60, size 0x4, align 4
    int32 m_nOutputWhitePointB; // offset 0x64, size 0x4, align 4
    float32 m_flGammaRGB; // offset 0x68, size 0x4, align 4
    float32 m_flGammaR; // offset 0x6C, size 0x4, align 4
    float32 m_flGammaG; // offset 0x70, size 0x4, align 4
    float32 m_flGammaB; // offset 0x74, size 0x4, align 4
};
