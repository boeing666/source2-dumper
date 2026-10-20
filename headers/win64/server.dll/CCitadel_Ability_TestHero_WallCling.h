#pragma once

class CCitadel_Ability_TestHero_WallCling : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1630, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x160C]; // offset 0x0
    Vector m_vecWallClingNormal; // offset 0x160C, size 0xC, align 4
    VectorWS m_vecWallPosition; // offset 0x1618, size 0xC, align 4
    Vector m_vecLastVelocity; // offset 0x1624, size 0xC, align 4
};
