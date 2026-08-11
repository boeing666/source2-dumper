#pragma once

class CCitadel_Ability_Trapper_WebWall : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1220, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x11F0]; // offset 0x0
    Vector m_vecCastPosition; // offset 0x11F0, size 0xC, align 4 | MNetworkEnable
    Vector m_vecCastPositionNormal; // offset 0x11FC, size 0xC, align 4 | MNetworkEnable
    Vector m_vecEndPosition; // offset 0x1208, size 0xC, align 4 | MNetworkEnable
    Vector m_vecEndPositionNormal; // offset 0x1214, size 0xC, align 4 | MNetworkEnable
};
