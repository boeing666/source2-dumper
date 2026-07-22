#pragma once

class CNmClipDocEvent_EntityAttribute : public CNmClipDocEvent /*0x0*/  // sizeof 0x68, align 0x8 [vtable] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    CNmEventTargetEntity_t m_target; // offset 0x10, size 0x4, align 4
    char _pad_0014[0x4]; // offset 0x14
    CUtlString m_attributeName; // offset 0x18, size 0x8, align 8
    CNmClipDocEvent_EntityAttribute_Type_t m_nValueType; // offset 0x20, size 0x4, align 4 | MPropertyAutoRebuildOnChange MPropertyFriendlyName
    int32 m_nIntValue; // offset 0x24, size 0x4, align 4 | MPropertyAttrStateCallback
    CPiecewiseCurve m_FloatValue; // offset 0x28, size 0x40, align 8 | MPropertyAttrStateCallback
};
