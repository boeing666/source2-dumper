#pragma once

class CNmCameraDOFEvent : public CNmEvent /*0x0*/  // sizeof 0x58, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x18]; // offset 0x0
    CPiecewiseCurve m_curve; // offset 0x18, size 0x40, align 8
};
