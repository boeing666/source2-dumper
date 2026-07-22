#pragma once

class CActionComponent : public CAnimGraphDoc_Component /*0x0*/  // sizeof 0x58, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x38]; // offset 0x0
    CUtlVector< CSmartPtr< CAnimGraphDoc_Action > > m_actions; // offset 0x38, size 0x18, align 8
    CUtlString m_sName; // offset 0x50, size 0x8, align 8 | MPropertyFriendlyName MPropertySortPriority
};
