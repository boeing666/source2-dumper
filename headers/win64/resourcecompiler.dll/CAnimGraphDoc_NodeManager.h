#pragma once

class CAnimGraphDoc_NodeManager  // sizeof 0x48, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CUtlHashtable< AnimNodeID, CSmartPtr< CAnimGraphDoc_Node > > m_nodes; // offset 0x8, size 0x20, align 8 | MPropertySuppressField
    char _pad_0028[0x20]; // offset 0x28
};
