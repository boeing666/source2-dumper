#pragma once

class CCitadel_Ability_Digger_EnterTunnel : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x16F8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16F0]; // offset 0x0
    CHandle< C_CitadelPassthroughFakeWall > m_hPushedFakeWall; // offset 0x16F0, size 0x4, align 4
    CHandle< C_CitadelPassthroughFakeWall > m_hPushedFakeWallLastThink; // offset 0x16F4, size 0x4, align 4
};
