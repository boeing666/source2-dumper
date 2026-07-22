#pragma once

class CKnife : public CCSWeaponBase /*0x0*/  // sizeof 0x1060, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x1050]; // offset 0x0
    bool m_bFirstAttack; // offset 0x1050, size 0x1, align 1
    char _pad_1051[0xF]; // offset 0x1051
};
