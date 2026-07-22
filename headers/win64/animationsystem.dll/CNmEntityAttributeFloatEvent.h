#pragma once

class CNmEntityAttributeFloatEvent : public CNmEntityAttributeEventBase /*0x0*/  // sizeof 0x78, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x38]; // offset 0x0
    CPiecewiseCurve m_FloatValue; // offset 0x38, size 0x40, align 8
};
