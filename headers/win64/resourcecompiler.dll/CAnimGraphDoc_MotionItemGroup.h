#pragma once

class CAnimGraphDoc_MotionItemGroup  // sizeof 0x70, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x20]; // offset 0x0
    CUtlVector< CSmartPtr< CAnimGraphDoc_MotionItem > > m_motions; // offset 0x20, size 0x18, align 8 | MPropertySuppressField
    CUtlString m_name; // offset 0x38, size 0x8, align 8 | MPropertyFriendlyName
    CAnimGraphDoc_ConditionContainer m_conditions; // offset 0x40, size 0x30, align 8
};
