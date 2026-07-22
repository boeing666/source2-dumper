#pragma once

class CSmartPropOperation_SaveSurfaceNormal : public CSmartPropOperation /*0x0*/  // sizeof 0x98, align 0x8 [vtable] (smartprops) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription MVDataClassGroup}
{
public:
    char _pad_0000[0x50]; // offset 0x0
    CSmartPropAttributeCoordinateSpace m_CoordinateSpace; // offset 0x50, size 0x40, align 255 | MPropertyDescription
    CUtlString m_VariableName; // offset 0x90, size 0x8, align 8 | MPropertyAttributeEditor
};
