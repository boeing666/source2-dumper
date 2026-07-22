#pragma once

class C_WeaponBaseItem : public C_CSWeaponBase /*0x0*/  // sizeof 0x2B70, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x2B65]; // offset 0x0
    bool m_bSequenceInProgress; // offset 0x2B65, size 0x1, align 1
    bool m_bRedraw; // offset 0x2B66, size 0x1, align 1
    char _pad_2B67[0x9]; // offset 0x2B67
};
