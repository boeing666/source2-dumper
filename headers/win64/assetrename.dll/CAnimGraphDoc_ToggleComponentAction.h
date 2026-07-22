#pragma once

class CAnimGraphDoc_ToggleComponentAction : public CAnimGraphDoc_Action /*0x0*/  // sizeof 0x30, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    AnimComponentID m_componentID; // offset 0x28, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    bool m_bSetEnabled; // offset 0x2C, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_002D[0x3]; // offset 0x2D
};
