#pragma once

class CScaleFunctionAbilityPropertySingleStatCurveVData : public CScaleFunctionVData /*0x0*/  // sizeof 0x80, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x40]; // offset 0x0
    CPiecewiseCurve m_statCurve; // offset 0x40, size 0x40, align 8
};
