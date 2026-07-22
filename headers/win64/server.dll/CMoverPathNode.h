#pragma once

class CMoverPathNode : public CPathNode /*0x0*/  // sizeof 0x5A0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x500]; // offset 0x0
    CEntityOutputTemplate< CUtlString > m_OnStartFromOrInSegment; // offset 0x500, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_OnStoppedAtOrInSegment; // offset 0x520, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_OnPassThrough; // offset 0x540, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_OnPassThroughForward; // offset 0x560, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_OnPassThroughReverse; // offset 0x580, size 0x20, align 8
};
