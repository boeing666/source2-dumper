#pragma once

class CAnimGraphDoc_CycleControlNode : public CAnimGraphDoc_Node /*0x0*/  // sizeof 0x60, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x40]; // offset 0x0
    CAnimGraphDoc_NodeConnection m_inputConnection; // offset 0x40, size 0x8, align 4 | MPropertySuppressField
    AnimValueSource m_valueSource; // offset 0x48, size 0x4, align 4 | MPropertyFriendlyName MPropertyAutoRebuildOnChange MPropertyAttrStateCallback
    char _pad_004C[0x4]; // offset 0x4C
    CUtlString m_paramName; // offset 0x50, size 0x8, align 8 | MPropertySuppressField
    AnimParamID m_param; // offset 0x58, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    bool m_bLockWhenWaning; // offset 0x5C, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_005D[0x3]; // offset 0x5D
};
