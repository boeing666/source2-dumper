#pragma once

class CMoverPathNode : public CPathNode /*0x0*/  // sizeof 0x590, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x4F0]; // offset 0x0
    CEntityOutputTemplate< CUtlString > m_OnStartFromOrInSegment; // offset 0x4F0, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_OnStoppedAtOrInSegment; // offset 0x510, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_OnPassThrough; // offset 0x530, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_OnPassThroughForward; // offset 0x550, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_OnPassThroughReverse; // offset 0x570, size 0x20, align 8
};
