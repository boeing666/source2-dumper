#pragma once

class CCitadel_Ability_Bull_Charge : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1DE0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A0]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_vecHitEntities; // offset 0x14A0, size 0x18, align 8
    bool m_bGainedWeaponPowerBuff; // offset 0x14B8, size 0x1, align 1
    char _pad_14B9[0x8F7]; // offset 0x14B9
    QAngle m_anglesCharging; // offset 0x1DB0, size 0xC, align 4
    GameTime_t m_flChargeStartTime; // offset 0x1DBC, size 0x4, align 255
    GameTime_t m_flFastChargeStartTime; // offset 0x1DC0, size 0x4, align 255
    GameTime_t m_flFastChargeEndTime; // offset 0x1DC4, size 0x4, align 255
    bool m_bHitSomethingStunnable; // offset 0x1DC8, size 0x1, align 1
    char _pad_1DC9[0x3]; // offset 0x1DC9
    bool m_bFirstTick; // offset 0x1DCC, size 0x1, align 1
    char _pad_1DCD[0x3]; // offset 0x1DCD
    Vector m_vGoalDir; // offset 0x1DD0, size 0xC, align 4
    char _pad_1DDC[0x4]; // offset 0x1DDC
};
