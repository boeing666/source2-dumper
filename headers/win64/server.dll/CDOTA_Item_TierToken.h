#pragma once

class CDOTA_Item_TierToken : public CDOTA_Item /*0x0*/  // sizeof 0x688, align 0xFF [vtable abstract] (server)
{
public:
    char _pad_0000[0x660]; // offset 0x0
    AbilityID_t[9] m_vecChoices; // offset 0x660, size 0x24, align 4
    char _pad_0684[0x4]; // offset 0x684
};
