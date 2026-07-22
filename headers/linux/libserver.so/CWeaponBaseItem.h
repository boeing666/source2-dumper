#pragma once

class CWeaponBaseItem : public CCSWeaponBase /*0x0*/  // sizeof 0x1320, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1315]; // offset 0x0
    bool m_bSequenceInProgress; // offset 0x1315, size 0x1, align 1
    bool m_bRedraw; // offset 0x1316, size 0x1, align 1
    char _pad_1317[0x9]; // offset 0x1317
};
