#pragma once

class CEntityAttributeTable  // sizeof 0x50, align 0xFF (entity2)
{
public:
    CUtlOrderedMap< CUtlStringTokenNoRegistration, Attribute_t > m_Attributes; // offset 0x0, size 0x28, align 8
    CUtlOrderedMap< CUtlStringTokenNoRegistration, CUtlString > m_Names; // offset 0x28, size 0x28, align 8
};
