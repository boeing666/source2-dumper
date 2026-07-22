#pragma once

class CPulseCell_Value_Curve : public CPulseCell_BaseValue /*0x0*/  // sizeof 0x88, align 0x8 [vtable] (pulse_runtime_lib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x48]; // offset 0x0
    CPiecewiseCurve m_Curve; // offset 0x48, size 0x40, align 8
};
