#pragma once

class CNPC_SimpleAnimatingAIVData : public CEntitySubclassVDataBase /*0x0*/  // sizeof 0x108, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelName; // offset 0x28, size 0xE0, align 8 | MPropertyStartGroup
};
