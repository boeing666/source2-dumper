#pragma once

class C_Knife : public C_CSWeaponBase /*0x0*/  // sizeof 0x1F20, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x1F10]; // offset 0x0
    bool m_bFirstAttack; // offset 0x1F10, size 0x1, align 1
    char _pad_1F11[0xF]; // offset 0x1F11
};
