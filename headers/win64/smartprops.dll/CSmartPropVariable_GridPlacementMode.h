#pragma once

class CSmartPropVariable_GridPlacementMode : public CSmartPropVariable /*0x0*/  // sizeof 0x40, align 0x8 [vtable] (smartprops) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription MVDataClassGroup}
{
public:
    char _pad_0000[0x38]; // offset 0x0
    SmartPropGridPlacementMode_t m_DefaultValue; // offset 0x38, size 0x4, align 4
    char _pad_003C[0x4]; // offset 0x3C
};
