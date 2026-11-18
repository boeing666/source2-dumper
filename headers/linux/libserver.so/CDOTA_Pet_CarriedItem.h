#pragma once

class CDOTA_Pet_CarriedItem : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xBC0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBB8]; // offset 0x0
    CHandle< CDOTA_BaseNPC_Hero > m_hHeroHandle; // offset 0xBB8, size 0x4, align 4
    char _pad_0BBC[0x4]; // offset 0xBBC
};
