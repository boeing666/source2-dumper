#pragma once

class CDOTA_Unit_Frogling_Event : public C_DOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x1CD0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1CCC]; // offset 0x0
    CHandle< C_DOTA_BaseNPC_Hero > m_hHeroHandle; // offset 0x1CCC, size 0x4, align 4
};
