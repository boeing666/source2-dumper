#pragma once

class CNmClipDocEvent_MaterialAttribute : public CNmClipDocEvent /*0x0*/  // sizeof 0x118, align 0x8 [vtable] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    CUtlString m_attributeName; // offset 0x10, size 0x8, align 8
    CPiecewiseCurve m_x; // offset 0x18, size 0x40, align 8
    CPiecewiseCurve m_y; // offset 0x58, size 0x40, align 8
    CPiecewiseCurve m_z; // offset 0x98, size 0x40, align 8
    CPiecewiseCurve m_w; // offset 0xD8, size 0x40, align 8
};
