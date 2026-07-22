#pragma once

class C_DOTA_Item_TierToken : public C_DOTA_Item /*0x0*/  // sizeof 0x8F0, align 0xFF [vtable abstract] (client)
{
public:
    char _pad_0000[0x8CC]; // offset 0x0
    AbilityID_t[9] m_vecChoices; // offset 0x8CC, size 0x24, align 4
};
