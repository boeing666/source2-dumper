#pragma once

class CCitadel_Ability_Bull_Charge : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1888, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x1858]; // offset 0x0
    QAngle m_anglesCharging; // offset 0x1858, size 0xC, align 4 | MNetworkEnable
    GameTime_t m_flChargeStartTime; // offset 0x1864, size 0x4, align 255 | MNetworkEnable MNetworkChangeCallback
    GameTime_t m_flFastChargeStartTime; // offset 0x1868, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_flFastChargeEndTime; // offset 0x186C, size 0x4, align 255 | MNetworkEnable
    bool m_bHitAPlayer; // offset 0x1870, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_1871[0x3]; // offset 0x1871
    bool m_bFirstTick; // offset 0x1874, size 0x1, align 1
    char _pad_1875[0x3]; // offset 0x1875
    Vector m_vGoalDir; // offset 0x1878, size 0xC, align 4
    char _pad_1884[0x4]; // offset 0x1884
};
