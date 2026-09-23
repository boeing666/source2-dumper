#pragma once

class CNmClipDocEvent_MaterialAttribute : public CNmClipDocEvent /*0x0*/  // sizeof 0x128, align 0x8 [vtable] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x18]; // offset 0x0
    CNmEventTargetEntity_t m_target; // offset 0x18, size 0x4, align 4
    char _pad_001C[0x4]; // offset 0x1C
    CUtlString m_attributeName; // offset 0x20, size 0x8, align 8
    CPiecewiseCurve m_x; // offset 0x28, size 0x40, align 8
    CPiecewiseCurve m_y; // offset 0x68, size 0x40, align 8
    CPiecewiseCurve m_z; // offset 0xA8, size 0x40, align 8
    CPiecewiseCurve m_w; // offset 0xE8, size 0x40, align 8
};
