#pragma once

class CDOTA_Modifier_Brewmaster_PrimalSplit_Scepter_Item : public CDOTA_Buff /*0x0*/  // sizeof 0x1B00, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    CHandle< CBaseEntity > m_hOriginalItem; // offset 0x1AF8, size 0x4, align 4
    CHandle< CBaseEntity > m_hBrewlingItem; // offset 0x1AFC, size 0x4, align 4
};
