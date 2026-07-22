#pragma once

class C_DOTA_Item_Necronomicon : public C_DOTA_Item /*0x0*/  // sizeof 0x8D8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x8CC]; // offset 0x0
    CHandle< C_BaseEntity > m_hWarrior; // offset 0x8CC, size 0x4, align 4
    CHandle< C_BaseEntity > m_hArcher; // offset 0x8D0, size 0x4, align 4
    char _pad_08D4[0x4]; // offset 0x8D4
};
