#pragma once

class CCitadel_Ability_Trapper_WebWall : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1488, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x1458]; // offset 0x0
    Vector m_vecCastPosition; // offset 0x1458, size 0xC, align 4 | MNetworkEnable
    Vector m_vecCastPositionNormal; // offset 0x1464, size 0xC, align 4 | MNetworkEnable
    Vector m_vecEndPosition; // offset 0x1470, size 0xC, align 4 | MNetworkEnable
    Vector m_vecEndPositionNormal; // offset 0x147C, size 0xC, align 4 | MNetworkEnable
};
