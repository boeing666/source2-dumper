#pragma once

class CInfoChoreoAnchor : public CPointEntity /*0x0*/  // sizeof 0x4C8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x498]; // offset 0x0
    CUtlVector< CInfoChoreoAnchorPosition > m_vecTargetEntries; // offset 0x498, size 0x18, align 8
    CUtlVector< CInfoChoreoAnchorPosition > m_vecTargetWarps; // offset 0x4B0, size 0x18, align 8
};
