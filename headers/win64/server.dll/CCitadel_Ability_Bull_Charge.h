#pragma once

class CCitadel_Ability_Bull_Charge : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1640, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_vecHitEntities; // offset 0xF70, size 0x18, align 8
    bool m_bGainedWeaponPowerBuff; // offset 0xF88, size 0x1, align 1
    char _pad_0F89[0x687]; // offset 0xF89
    QAngle m_anglesCharging; // offset 0x1610, size 0xC, align 4 | MNetworkEnable
    GameTime_t m_flChargeStartTime; // offset 0x161C, size 0x4, align 255 | MNetworkEnable MNetworkChangeCallback
    GameTime_t m_flFastChargeStartTime; // offset 0x1620, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_flFastChargeEndTime; // offset 0x1624, size 0x4, align 255 | MNetworkEnable
    bool m_bHitAPlayer; // offset 0x1628, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_1629[0x3]; // offset 0x1629
    bool m_bFirstTick; // offset 0x162C, size 0x1, align 1
    char _pad_162D[0x3]; // offset 0x162D
    Vector m_vGoalDir; // offset 0x1630, size 0xC, align 4
    char _pad_163C[0x4]; // offset 0x163C
};
