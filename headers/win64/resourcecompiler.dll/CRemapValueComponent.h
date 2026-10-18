#pragma once

class CRemapValueComponent : public CAnimGraphDoc_Component /*0x0*/  // sizeof 0x58, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x38]; // offset 0x0
    CUtlString m_name; // offset 0x38, size 0x8, align 8 | MPropertyFriendlyName
    CUtlVector< CRemapValueItem > m_items; // offset 0x40, size 0x18, align 8 | MPropertyFriendlyName MPropertyAutoExpandSelf
};
