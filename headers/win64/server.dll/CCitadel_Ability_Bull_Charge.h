#pragma once

class CCitadel_Ability_Bull_Charge : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1DE8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A8]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_vecHitEntities; // offset 0x14A8, size 0x18, align 8
    bool m_bGainedWeaponPowerBuff; // offset 0x14C0, size 0x1, align 1
    char _pad_14C1[0x8F7]; // offset 0x14C1
    QAngle m_anglesCharging; // offset 0x1DB8, size 0xC, align 4
    GameTime_t m_flChargeStartTime; // offset 0x1DC4, size 0x4, align 255
    GameTime_t m_flFastChargeStartTime; // offset 0x1DC8, size 0x4, align 255
    GameTime_t m_flFastChargeEndTime; // offset 0x1DCC, size 0x4, align 255
    bool m_bHitSomethingStunnable; // offset 0x1DD0, size 0x1, align 1
    char _pad_1DD1[0x3]; // offset 0x1DD1
    bool m_bFirstTick; // offset 0x1DD4, size 0x1, align 1
    char _pad_1DD5[0x3]; // offset 0x1DD5
    Vector m_vGoalDir; // offset 0x1DD8, size 0xC, align 4
    char _pad_1DE4[0x4]; // offset 0x1DE4
};
