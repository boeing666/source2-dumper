#pragma once

class CPointChildModifier : public C_PointEntity /*0x0*/  // sizeof 0x608, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x600]; // offset 0x0
    bool m_bOrphanInsteadOfDeletingChildrenOnRemove; // offset 0x600, size 0x1, align 1
    char _pad_0601[0x7]; // offset 0x601
};
