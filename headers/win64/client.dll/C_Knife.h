#pragma once

class C_Knife : public C_CSWeaponBase /*0x0*/  // sizeof 0x1F70, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x1F60]; // offset 0x0
    bool m_bFirstAttack; // offset 0x1F60, size 0x1, align 1
    char _pad_1F61[0xF]; // offset 0x1F61
};
