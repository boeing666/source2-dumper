#pragma once

class CColorTintColorCorrectionLayer : public CColorCorrectionLayer /*0x0*/  // sizeof 0x40, align 0x8 [vtable] (resourcecompiler) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    int32 m_nTintColorR; // offset 0x28, size 0x4, align 4
    int32 m_nTintColorG; // offset 0x2C, size 0x4, align 4
    int32 m_nTintColorB; // offset 0x30, size 0x4, align 4
    int32 m_nStrength; // offset 0x34, size 0x4, align 4
    bool m_bPreserveLuminosity; // offset 0x38, size 0x1, align 1
    char _pad_0039[0x7]; // offset 0x39
};
