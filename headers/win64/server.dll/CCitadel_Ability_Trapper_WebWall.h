#pragma once

class CCitadel_Ability_Trapper_WebWall : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1848, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    VectorWS m_vecCastPosition; // offset 0x1818, size 0xC, align 4
    Vector m_vecCastPositionNormal; // offset 0x1824, size 0xC, align 4
    VectorWS m_vecEndPosition; // offset 0x1830, size 0xC, align 4
    Vector m_vecEndPositionNormal; // offset 0x183C, size 0xC, align 4
};
