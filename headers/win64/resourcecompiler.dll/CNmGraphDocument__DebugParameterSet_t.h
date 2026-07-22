#pragma once

struct CNmGraphDocument::DebugParameterSet_t  // sizeof 0x58, align 0x8 (animdoclib) {MGetKV3ClassDefaults}
{
    CGlobalSymbol m_ID; // offset 0x0, size 0x8, align 8
    CUtlLeanVector< std::pair< CGlobalSymbol, bool > > m_boolValues; // offset 0x8, size 0x10, align 8
    CUtlLeanVector< std::pair< CGlobalSymbol, float32 > > m_floatValues; // offset 0x18, size 0x10, align 8
    CUtlLeanVector< std::pair< CGlobalSymbol, CGlobalSymbol > > m_IDValues; // offset 0x28, size 0x10, align 8
    CUtlLeanVector< std::pair< CGlobalSymbol, Vector > > m_vectorValues; // offset 0x38, size 0x10, align 8
    CUtlLeanVector< std::pair< CGlobalSymbol, CNmTarget > > m_targetValues; // offset 0x48, size 0x10, align 8
};
