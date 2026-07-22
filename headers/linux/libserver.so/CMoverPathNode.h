#pragma once

class CMoverPathNode : public CPathNode /*0x0*/  // sizeof 0x870, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x7C8]; // offset 0x0
    CEntityOutputTemplate< CUtlString > m_OnStartFromOrInSegment; // offset 0x7C8, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_OnStoppedAtOrInSegment; // offset 0x7E8, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_OnPassThrough; // offset 0x808, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_OnPassThroughForward; // offset 0x828, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_OnPassThroughReverse; // offset 0x848, size 0x20, align 8
    char _pad_0868[0x8]; // offset 0x868
};
