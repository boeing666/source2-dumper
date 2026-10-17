#pragma once

class CSmartPropOperation_ResetRotation : public CSmartPropTransformOperation /*0x0*/  // sizeof 0x150, align 0x8 [vtable] (smartprops) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription MVDataClassGroup}
{
public:
    char _pad_0000[0x50]; // offset 0x0
    CSmartPropAttributeBool m_bIgnoreObjectRotation; // offset 0x50, size 0x40, align 8 | MPropertyDescription
    CSmartPropAttributeBool m_bResetPitch; // offset 0x90, size 0x40, align 8 | MPropertyDescription
    CSmartPropAttributeBool m_bResetYaw; // offset 0xD0, size 0x40, align 8 | MPropertyDescription
    CSmartPropAttributeBool m_bResetRoll; // offset 0x110, size 0x40, align 8 | MPropertyDescription
};
