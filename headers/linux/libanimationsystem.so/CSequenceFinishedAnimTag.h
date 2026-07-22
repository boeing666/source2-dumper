#pragma once

class CSequenceFinishedAnimTag : public CAnimTagBase /*0x0*/  // sizeof 0x60, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x58]; // offset 0x0
    CUtlString m_sequenceName; // offset 0x58, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeChoiceName
};
