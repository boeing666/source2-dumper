#pragma once

class CInfoChoreoAnchor : public CPointEntity /*0x0*/  // sizeof 0x7A8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    CUtlVector< CInfoChoreoAnchorPosition > m_vecTargetEntries; // offset 0x778, size 0x18, align 8
    CUtlVector< CInfoChoreoAnchorPosition > m_vecTargetWarps; // offset 0x790, size 0x18, align 8
};
