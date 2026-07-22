#pragma once

class CToneMappingLayer : public CColorCorrectionLayer /*0x0*/  // sizeof 0x68, align 0x8 [vtable] (resourcecompiler) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    PostProcessingTonemapParameters_t m_params; // offset 0x28, size 0x3C, align 4
    char _pad_0064[0x4]; // offset 0x64
};
