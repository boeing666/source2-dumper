#pragma once

class CAnimGraphDoc_SubGraph  // sizeof 0xE0, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CAnimGraphDoc_NodeManager m_nodeManager; // offset 0x8, size 0x48, align 8
    CAnimGraphDoc_ComponentManager m_componentManager; // offset 0x50, size 0x28, align 8
    CUtlVector< CSmartPtr< CAnimParameterBase > > m_localParameters; // offset 0x78, size 0x18, align 8
    CUtlVector< CSmartPtr< CAnimTagBase > > m_localTags; // offset 0x90, size 0x18, align 8
    CUtlVector< CUtlString > m_referencedParamGroups; // offset 0xA8, size 0x18, align 8
    CUtlVector< CUtlString > m_referencedTagGroups; // offset 0xC0, size 0x18, align 8
    char _pad_00D8[0x8]; // offset 0xD8
};
