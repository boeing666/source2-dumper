#pragma once

class CSmartPropVariable_Float : public CSmartPropVariable /*0x0*/  // sizeof 0x48, align 0x8 [vtable] (smartprops) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x38]; // offset 0x0
    float32 m_DefaultValue; // offset 0x38, size 0x4, align 4
    float32 m_flParamaterMinValue; // offset 0x3C, size 0x4, align 4 | MPropertySortPriority MPropertyReadonlyExpr
    float32 m_flParamaterMaxValue; // offset 0x40, size 0x4, align 4 | MPropertySortPriority MPropertyReadonlyExpr
    char _pad_0044[0x4]; // offset 0x44
};
