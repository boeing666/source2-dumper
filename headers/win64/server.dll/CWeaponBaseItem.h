#pragma once

class CWeaponBaseItem : public CCSWeaponBase /*0x0*/  // sizeof 0x1060, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1050]; // offset 0x0
    bool m_bSequenceInProgress; // offset 0x1050, size 0x1, align 1
    bool m_bRedraw; // offset 0x1051, size 0x1, align 1
    char _pad_1052[0xE]; // offset 0x1052
};
