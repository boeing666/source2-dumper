#pragma once

class CCitadel_Ability_Ratking_EnterTunnel : public CCitadelBaseAbility /*0x0*/  // sizeof 0x14C0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A8]; // offset 0x0
    Vector m_vStartingPositionSpringVelocity; // offset 0x14A8, size 0xC, align 4
    CHandle< CCitadelPassthroughFakeWall > m_hPushedFakeWall; // offset 0x14B4, size 0x4, align 4
    CHandle< CCitadelPassthroughFakeWall > m_hPushedFakeWallLastThink; // offset 0x14B8, size 0x4, align 4
    char _pad_14BC[0x4]; // offset 0x14BC
};
