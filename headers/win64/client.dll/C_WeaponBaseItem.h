#pragma once

class C_WeaponBaseItem : public C_CSWeaponBase /*0x0*/  // sizeof 0x1F30, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1F20]; // offset 0x0
    bool m_bSequenceInProgress; // offset 0x1F20, size 0x1, align 1
    bool m_bRedraw; // offset 0x1F21, size 0x1, align 1
    char _pad_1F22[0xE]; // offset 0x1F22
};
