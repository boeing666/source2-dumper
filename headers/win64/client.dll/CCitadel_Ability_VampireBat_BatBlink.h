#pragma once

class CCitadel_Ability_VampireBat_BatBlink : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1538, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x14E0]; // offset 0x0
    int32 m_iRemainingCasts; // offset 0x14E0, size 0x4, align 4 | MNetworkEnable
    bool m_bIsBlinking; // offset 0x14E4, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback
    char _pad_14E5[0x3]; // offset 0x14E5
    GameTime_t m_RecastEndTime; // offset 0x14E8, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_BlinkEndTime; // offset 0x14EC, size 0x4, align 255 | MNetworkEnable
    char _pad_14F0[0x48]; // offset 0x14F0
};
