#pragma once

class CAnimGraphDoc_SubGraphNode : public CAnimGraphDoc_ContainerNodeBase /*0x0*/  // sizeof 0xB0, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x70]; // offset 0x0
    CUtlString m_subGraphFilename; // offset 0x70, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeEditor
    CUtlHashtable< CUtlString, CUtlString > m_animNameMap; // offset 0x78, size 0x20, align 8 | MPropertySuppressField
    char _pad_0098[0x18]; // offset 0x98
};
