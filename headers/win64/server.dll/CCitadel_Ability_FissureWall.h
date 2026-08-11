#pragma once

class CCitadel_Ability_FissureWall : public CCitadelBaseAbility /*0x0*/  // sizeof 0x11E0, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x1180]; // offset 0x0
    VectorWS m_vecPosition; // offset 0x1180, size 0xC, align 4 | MNetworkEnable
    VectorWS m_vecTravellingPosition; // offset 0x118C, size 0xC, align 4 | MNetworkEnable
    VectorWS m_vecInitialPosition; // offset 0x1198, size 0xC, align 4 | MNetworkEnable
    GameTime_t m_CastTime; // offset 0x11A4, size 0x4, align 255 | MNetworkEnable
    Vector m_vecDirection; // offset 0x11A8, size 0xC, align 4 | MNetworkEnable
    Vector m_vecLeft; // offset 0x11B4, size 0xC, align 4 | MNetworkEnable
    float32 m_Length; // offset 0x11C0, size 0x4, align 4 | MNetworkEnable
    char _pad_11C4[0x16]; // offset 0x11C4
    bool m_bTraveling; // offset 0x11DA, size 0x1, align 1 | MNetworkEnable
    bool m_bPreview; // offset 0x11DB, size 0x1, align 1 | MNetworkEnable
    char _pad_11DC[0x4]; // offset 0x11DC
};
