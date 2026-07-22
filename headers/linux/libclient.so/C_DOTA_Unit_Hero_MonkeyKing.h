#pragma once

class C_DOTA_Unit_Hero_MonkeyKing : public C_DOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x1F10, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1F04]; // offset 0x0
    uint32 m_nTreeDisguise; // offset 0x1F04, size 0x4, align 4
    uint32 m_nPerchedTree; // offset 0x1F08, size 0x4, align 4
    CHandle< C_BaseEntity > m_hTreeDisguiseEnt; // offset 0x1F0C, size 0x4, align 4
};
