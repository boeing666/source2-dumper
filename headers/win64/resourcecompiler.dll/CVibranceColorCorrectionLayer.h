#pragma once

class CVibranceColorCorrectionLayer : public CColorCorrectionLayer /*0x0*/  // sizeof 0x30, align 0x8 [vtable] (resourcecompiler) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    int32 m_nVibrance; // offset 0x28, size 0x4, align 4
    int32 m_nSaturation; // offset 0x2C, size 0x4, align 4
};
