#pragma once

class CDOTA_Pet_CarriedItem : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xB58, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB50]; // offset 0x0
    CHandle< CDOTA_BaseNPC_Hero > m_hHeroHandle; // offset 0xB50, size 0x4, align 4
    char _pad_0B54[0x4]; // offset 0xB54
};
