#pragma once

class CNmGraphDocument : public CNmAnimDocument /*0x0*/  // sizeof 0xB8, align 0x8 [vtable] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x70]; // offset 0x0
    CNmGraphDocFlowGraph* m_pRootGraph; // offset 0x70, size 0x8, align 8
    CNmVariationHierarchy m_variationHierarchy; // offset 0x78, size 0x18, align 8
    CUtlLeanVector< CNmGraphDocument::DebugParameterSet_t > m_debugParameterSets; // offset 0x90, size 0x10, align 8
    CUtlVector< V_uuid_t > m_dictionaryIDSetIDs; // offset 0xA0, size 0x18, align 8
};
