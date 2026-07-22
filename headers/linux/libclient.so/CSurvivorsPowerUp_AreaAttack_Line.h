#pragma once

class CSurvivorsPowerUp_AreaAttack_Line : public CSurvivorsPowerUp_AreaAttack /*0x0*/  // sizeof 0x810, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x800]; // offset 0x0
    Vector m_vCachedFacingDirection; // offset 0x800, size 0xC, align 4
    bool m_bUseFacingDirection; // offset 0x80C, size 0x1, align 1
    char _pad_080D[0x3]; // offset 0x80D
};
