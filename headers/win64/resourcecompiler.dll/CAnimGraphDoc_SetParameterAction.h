#pragma once

class CAnimGraphDoc_SetParameterAction : public CAnimGraphDoc_Action /*0x0*/  // sizeof 0x48, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    CUtlString m_paramName; // offset 0x28, size 0x8, align 8 | MPropertyHideField
    AnimParamID m_param; // offset 0x30, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    CAnimVariant m_value; // offset 0x34, size 0x11, align 1 | MPropertyFriendlyName
    char _pad_0045[0x3]; // offset 0x45
};
