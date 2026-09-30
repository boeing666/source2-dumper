#pragma once

class CCitadel_Ability_TestHero_WallCling : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1628, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1604]; // offset 0x0
    Vector m_vecWallClingNormal; // offset 0x1604, size 0xC, align 4
    VectorWS m_vecWallPosition; // offset 0x1610, size 0xC, align 4
    Vector m_vecLastVelocity; // offset 0x161C, size 0xC, align 4
};
