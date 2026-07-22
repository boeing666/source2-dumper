#pragma once

class CLocalContrastLayer : public CColorCorrectionLayer /*0x0*/  // sizeof 0x40, align 0x8 [vtable] (resourcecompiler) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    PostProcessingLocalContrastParameters_t m_params; // offset 0x28, size 0x14, align 4
    char _pad_003C[0x4]; // offset 0x3C
};
