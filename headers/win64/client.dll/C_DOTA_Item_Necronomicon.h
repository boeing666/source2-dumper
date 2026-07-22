#pragma once

class C_DOTA_Item_Necronomicon : public C_DOTA_Item /*0x0*/  // sizeof 0x760, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x758]; // offset 0x0
    CHandle< C_BaseEntity > m_hWarrior; // offset 0x758, size 0x4, align 4
    CHandle< C_BaseEntity > m_hArcher; // offset 0x75C, size 0x4, align 4
};
