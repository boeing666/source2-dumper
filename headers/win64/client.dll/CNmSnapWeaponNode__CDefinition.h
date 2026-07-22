#pragma once

class CNmSnapWeaponNode::CDefinition : public CNmPassthroughNode::CDefinition /*0x0*/  // sizeof 0x20, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x18]; // offset 0x0
    int16 m_nFlashedAmountNodeIdx; // offset 0x18, size 0x2, align 2
    int16 m_nWeaponCategoryNodeIdx; // offset 0x1A, size 0x2, align 2
    int16 m_nWeaponTypeNodeIdx; // offset 0x1C, size 0x2, align 2
    char _pad_001E[0x2]; // offset 0x1E
};
