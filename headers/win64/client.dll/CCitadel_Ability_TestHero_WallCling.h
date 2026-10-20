#pragma once

class CCitadel_Ability_TestHero_WallCling : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1868, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1844]; // offset 0x0
    Vector m_vecWallClingNormal; // offset 0x1844, size 0xC, align 4
    VectorWS m_vecWallPosition; // offset 0x1850, size 0xC, align 4
    Vector m_vecLastVelocity; // offset 0x185C, size 0xC, align 4
};
