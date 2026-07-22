#pragma once

class CAnimGraphModelBinding  // sizeof 0x28, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CUtlString m_modelName; // offset 0x8, size 0x8, align 8
    CSmartPtr< CAnimUpdateSharedData > m_pSharedData; // offset 0x10, size 0x8, align 8
    char _pad_0018[0x10]; // offset 0x18
};
