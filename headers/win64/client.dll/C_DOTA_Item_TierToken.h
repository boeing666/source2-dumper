#pragma once

class C_DOTA_Item_TierToken : public C_DOTA_Item /*0x0*/  // sizeof 0x788, align 0xFF [vtable abstract] (client)
{
public:
    char _pad_0000[0x760]; // offset 0x0
    AbilityID_t[9] m_vecChoices; // offset 0x760, size 0x24, align 4
    char _pad_0784[0x4]; // offset 0x784
};
