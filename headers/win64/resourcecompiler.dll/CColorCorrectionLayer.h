#pragma once

class CColorCorrectionLayer  // sizeof 0x28, align 0xFF [vtable abstract] (resourcecompiler) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CUtlString m_name; // offset 0x8, size 0x8, align 8
    int32 m_nOpacityPercent; // offset 0x10, size 0x4, align 4
    bool m_bVisible; // offset 0x14, size 0x1, align 1
    char _pad_0015[0x3]; // offset 0x15
    CLayerMask* m_pLayerMask; // offset 0x18, size 0x8, align 8
    char _pad_0020[0x8]; // offset 0x20
};
