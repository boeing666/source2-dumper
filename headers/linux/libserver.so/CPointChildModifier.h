#pragma once

class CPointChildModifier : public CPointEntity /*0x0*/  // sizeof 0x790, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x788]; // offset 0x0
    bool m_bOrphanInsteadOfDeletingChildrenOnRemove; // offset 0x788, size 0x1, align 1
    char _pad_0789[0x7]; // offset 0x789
};
