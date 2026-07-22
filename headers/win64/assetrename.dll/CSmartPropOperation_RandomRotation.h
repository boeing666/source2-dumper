#pragma once

class CSmartPropOperation_RandomRotation : public CSmartPropTransformOperation /*0x0*/  // sizeof 0x110, align 0x8 [vtable] (smartprops) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription MVDataClassGroup}
{
public:
    char _pad_0000[0x50]; // offset 0x0
    CSmartPropAttributeAngles m_vRandomRotationMin; // offset 0x50, size 0x40, align 8 | MPropertyDescription
    CSmartPropAttributeAngles m_vRandomRotationMax; // offset 0x90, size 0x40, align 8 | MPropertyDescription
    CSmartPropAttributeAngles m_vSnapIncrement; // offset 0xD0, size 0x40, align 8 | MPropertyDescription
};
