#pragma once

class CAnimParameterManagerUpdater  // sizeof 0x100, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x18]; // offset 0x0
    CUtlVector< CSmartPtr< CAnimParameterBase > > m_parameters; // offset 0x18, size 0x18, align 8
    CUtlHashtable< AnimParamID, int32 > m_idToIndexMap; // offset 0x30, size 0x20, align 8
    CUtlHashtable< CUtlString, int32 > m_nameToIndexMap; // offset 0x50, size 0x20, align 8
    CUtlVector< CAnimParamHandle > m_indexToHandle; // offset 0x70, size 0x18, align 8
    CUtlVector< std::pair< CAnimParamHandle, CAnimVariant > > m_autoResetParams; // offset 0x88, size 0x18, align 8
    CUtlHashtable< CAnimParamHandle, int16 > m_autoResetMap; // offset 0xA0, size 0x20, align 8
    char _pad_00C0[0x40]; // offset 0xC0
};
