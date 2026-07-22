#pragma once

class CVignetteLayer : public CColorCorrectionLayer /*0x0*/  // sizeof 0x50, align 0x8 [vtable] (resourcecompiler) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    PostProcessingVignetteParameters_t m_params; // offset 0x28, size 0x24, align 4
    char _pad_004C[0x4]; // offset 0x4C
};
