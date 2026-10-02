#pragma once

class CCitadel_Ability_Ratking_EnterTunnel : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x16F0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16D8]; // offset 0x0
    Vector m_vStartingPositionSpringVelocity; // offset 0x16D8, size 0xC, align 4
    CHandle< C_CitadelPassthroughFakeWall > m_hPushedFakeWall; // offset 0x16E4, size 0x4, align 4
    CHandle< C_CitadelPassthroughFakeWall > m_hPushedFakeWallLastThink; // offset 0x16E8, size 0x4, align 4
    char _pad_16EC[0x4]; // offset 0x16EC
};
