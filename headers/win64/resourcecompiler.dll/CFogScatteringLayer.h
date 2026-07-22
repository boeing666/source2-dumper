#pragma once

class CFogScatteringLayer : public CColorCorrectionLayer /*0x0*/  // sizeof 0x48, align 0x8 [vtable] (resourcecompiler) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    PostProcessingFogScatteringParameters_t m_params; // offset 0x28, size 0x20, align 4
};
