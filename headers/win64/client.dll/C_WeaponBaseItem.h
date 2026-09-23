#pragma once

class C_WeaponBaseItem : public C_CSWeaponBase /*0x0*/  // sizeof 0x1F20, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1F10]; // offset 0x0
    bool m_bSequenceInProgress; // offset 0x1F10, size 0x1, align 1
    bool m_bRedraw; // offset 0x1F11, size 0x1, align 1
    char _pad_1F12[0xE]; // offset 0x1F12
};
