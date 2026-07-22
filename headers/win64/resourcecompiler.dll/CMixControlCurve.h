#pragma once

class CMixControlCurve : public CMixPropertyBase /*0x0*/  // sizeof 0x70, align 0x8 [vtable] (sounddoc_lib) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0x20]; // offset 0x0
    float32 m_flInputMin; // offset 0x20, size 0x4, align 4
    float32 m_flInputMax; // offset 0x24, size 0x4, align 4
    float32 m_flOutputMin; // offset 0x28, size 0x4, align 4
    float32 m_flOutputMax; // offset 0x2C, size 0x4, align 4
    CPiecewiseCurve m_curve; // offset 0x30, size 0x40, align 8 | MPropertySuppressField
};
