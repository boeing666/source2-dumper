#pragma once

class CSmartPropPulse_CreateLocator : public CSmartPropPulse_BaseQueryableFlow /*0x0*/  // sizeof 0x50, align 0x8 [vtable] (smartprops) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription MVDataClassGroup}
{
public:
    char _pad_0000[0x48]; // offset 0x0
    CUtlString m_LocatorName; // offset 0x48, size 0x8, align 8 | MPropertyFriendlyName MPropertyDescription
};
