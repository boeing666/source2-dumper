#pragma once

class CDOTA_Item_TierToken : public CDOTA_Item /*0x0*/  // sizeof 0x958, align 0xFF [vtable abstract] (server)
{
public:
    char _pad_0000[0x934]; // offset 0x0
    AbilityID_t[9] m_vecChoices; // offset 0x934, size 0x24, align 4
};
