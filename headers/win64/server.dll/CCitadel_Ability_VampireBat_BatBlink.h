#pragma once

class CCitadel_Ability_VampireBat_BatBlink : public CCitadelBaseAbility /*0x0*/  // sizeof 0x12D0, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x1278]; // offset 0x0
    int32 m_iRemainingCasts; // offset 0x1278, size 0x4, align 4 | MNetworkEnable
    bool m_bIsBlinking; // offset 0x127C, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback
    char _pad_127D[0x3]; // offset 0x127D
    GameTime_t m_RecastEndTime; // offset 0x1280, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_BlinkEndTime; // offset 0x1284, size 0x4, align 255 | MNetworkEnable
    char _pad_1288[0x48]; // offset 0x1288
};
