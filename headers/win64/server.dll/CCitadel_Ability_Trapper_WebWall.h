#pragma once

class CCitadel_Ability_Trapper_WebWall : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1840, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1810]; // offset 0x0
    VectorWS m_vecCastPosition; // offset 0x1810, size 0xC, align 4
    Vector m_vecCastPositionNormal; // offset 0x181C, size 0xC, align 4
    VectorWS m_vecEndPosition; // offset 0x1828, size 0xC, align 4
    Vector m_vecEndPositionNormal; // offset 0x1834, size 0xC, align 4
};
