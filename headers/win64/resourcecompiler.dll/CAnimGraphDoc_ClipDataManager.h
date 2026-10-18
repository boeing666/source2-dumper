#pragma once

class CAnimGraphDoc_ClipDataManager  // sizeof 0x30, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    CUtlHashtable< CUtlString, CSmartPtr< CAnimGraphDoc_ClipData > > m_itemTable; // offset 0x10, size 0x20, align 8
};
