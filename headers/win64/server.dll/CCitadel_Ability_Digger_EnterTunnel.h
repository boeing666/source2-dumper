#pragma once

class CCitadel_Ability_Digger_EnterTunnel : public CCitadelBaseAbility /*0x0*/  // sizeof 0x14B8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14B0]; // offset 0x0
    CHandle< CCitadelPassthroughFakeWall > m_hPushedFakeWall; // offset 0x14B0, size 0x4, align 4
    CHandle< CCitadelPassthroughFakeWall > m_hPushedFakeWallLastThink; // offset 0x14B4, size 0x4, align 4
};
