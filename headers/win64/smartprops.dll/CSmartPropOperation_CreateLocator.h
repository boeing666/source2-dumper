#pragma once

class CSmartPropOperation_CreateLocator : public CSmartPropTransformOperation /*0x0*/  // sizeof 0x1D8, align 0x8 [vtable] (smartprops) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription MVDataClassGroup}
{
public:
    char _pad_0000[0x50]; // offset 0x0
    CUtlString m_LocatorName; // offset 0x50, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeEditor MPropertyDescription
    CSmartPropAttributeVector m_vOffset; // offset 0x58, size 0x40, align 8 | MPropertyDescription
    CSmartPropAttributeFloat m_flDisplayScale; // offset 0x98, size 0x40, align 8 | MPropertyDescription
    CSmartPropAttributeBool m_bConfigurable; // offset 0xD8, size 0x40, align 8 | MPropertyDescription
    CSmartPropAttributeBool m_bAllowTranslation; // offset 0x118, size 0x40, align 8 | MPropertyReadonlyExpr MPropertyGroupName
    CSmartPropAttributeBool m_bAllowRotation; // offset 0x158, size 0x40, align 8 | MPropertyReadonlyExpr MPropertyGroupName
    CSmartPropAttributeBool m_bAllowScale; // offset 0x198, size 0x40, align 8 | MPropertyReadonlyExpr MPropertyGroupName MPropertyDescription
};
