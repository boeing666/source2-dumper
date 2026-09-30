#pragma once

class CCitadel_Ability_Trapper_WebWall : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1A78, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1A48]; // offset 0x0
    VectorWS m_vecCastPosition; // offset 0x1A48, size 0xC, align 4
    Vector m_vecCastPositionNormal; // offset 0x1A54, size 0xC, align 4
    VectorWS m_vecEndPosition; // offset 0x1A60, size 0xC, align 4
    Vector m_vecEndPositionNormal; // offset 0x1A6C, size 0xC, align 4
};
