#pragma once

class C_Knife : public C_CSWeaponBase /*0x0*/  // sizeof 0x2B70, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x2B65]; // offset 0x0
    bool m_bFirstAttack; // offset 0x2B65, size 0x1, align 1
    char _pad_2B66[0xA]; // offset 0x2B66
};
