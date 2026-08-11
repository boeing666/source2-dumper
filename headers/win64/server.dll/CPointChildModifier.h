#pragma once

class CPointChildModifier : public CPointEntity /*0x0*/  // sizeof 0x4A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x498]; // offset 0x0
    bool m_bOrphanInsteadOfDeletingChildrenOnRemove; // offset 0x498, size 0x1, align 1
    char _pad_0499[0x7]; // offset 0x499
};
