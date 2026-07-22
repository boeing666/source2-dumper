#pragma once

class C_WeaponBaseItem : public C_CSWeaponBase /*0x0*/  // sizeof 0x1CF0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1CE0]; // offset 0x0
    bool m_bSequenceInProgress; // offset 0x1CE0, size 0x1, align 1
    bool m_bRedraw; // offset 0x1CE1, size 0x1, align 1
    char _pad_1CE2[0xE]; // offset 0x1CE2
};
