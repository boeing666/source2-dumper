#pragma once

class CMixSubgraph : public CMixPropertyBase /*0x0*/  // sizeof 0x30, align 0x8 [vtable] (sounddoc_lib) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0x20]; // offset 0x0
    CUtlString subgraphFile; // offset 0x20, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeEditor
    CUtlString subgraphName; // offset 0x28, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeChoiceName
};
