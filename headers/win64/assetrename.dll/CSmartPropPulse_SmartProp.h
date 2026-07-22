#pragma once

class CSmartPropPulse_SmartProp : public CPulseCell_BaseFlow /*0x0*/  // sizeof 0x50, align 0x8 [vtable] (smartprops) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x48]; // offset 0x0
    CStrongHandle< InfoForResourceTypeCSmartProp > m_hSmartProp; // offset 0x48, size 0x8, align 8 | MPropertyDescription
};
