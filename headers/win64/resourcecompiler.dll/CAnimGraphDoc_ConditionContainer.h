#pragma once

class CAnimGraphDoc_ConditionContainer  // sizeof 0x30, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CUtlVector< CSmartPtr< CAnimGraphDoc_Condition > > m_conditions; // offset 0x8, size 0x18, align 8 | MPropertySuppressField
    char _pad_0020[0x10]; // offset 0x20
};
