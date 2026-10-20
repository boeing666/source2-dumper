#pragma once

class CCitadel_Ability_Digger_EnterTunnel : public CCitadelBaseAbility /*0x0*/  // sizeof 0x14C0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14B8]; // offset 0x0
    CHandle< CCitadelPassthroughFakeWall > m_hPushedFakeWall; // offset 0x14B8, size 0x4, align 4
    CHandle< CCitadelPassthroughFakeWall > m_hPushedFakeWallLastThink; // offset 0x14BC, size 0x4, align 4
};
