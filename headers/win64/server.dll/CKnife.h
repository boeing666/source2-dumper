#pragma once

class CKnife : public CCSWeaponBase /*0x0*/  // sizeof 0x1280, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x1270]; // offset 0x0
    bool m_bFirstAttack; // offset 0x1270, size 0x1, align 1
    char _pad_1271[0xF]; // offset 0x1271
};
