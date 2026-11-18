#pragma once

class C_DOTA_Unit_Hero_MonkeyKing : public C_DOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x20A8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x209C]; // offset 0x0
    uint32 m_nTreeDisguise; // offset 0x209C, size 0x4, align 4
    uint32 m_nPerchedTree; // offset 0x20A0, size 0x4, align 4
    CHandle< C_BaseEntity > m_hTreeDisguiseEnt; // offset 0x20A4, size 0x4, align 4
};
