#pragma once

class CLayerMask  // sizeof 0x18, align 0x8 [vtable trivial_dtor] (resourcecompiler) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    int32 m_nLumMaskCenter; // offset 0x8, size 0x4, align 4
    int32 m_nLumMaskWidth; // offset 0xC, size 0x4, align 4
    int32 m_nLumMaskShape; // offset 0x10, size 0x4, align 4
    bool m_bInverted; // offset 0x14, size 0x1, align 1
    char _pad_0015[0x3]; // offset 0x15
};
