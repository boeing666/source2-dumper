#pragma once

class CTriggerHurt : public CBaseTrigger /*0x0*/  // sizeof 0x968, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8E0]; // offset 0x0
    float32 m_flOriginalDamage; // offset 0x8E0, size 0x4, align 4
    float32 m_flDamage; // offset 0x8E4, size 0x4, align 4
    float32 m_flDamageCap; // offset 0x8E8, size 0x4, align 4
    GameTime_t m_flLastDmgTime; // offset 0x8EC, size 0x4, align 255
    float32 m_flForgivenessDelay; // offset 0x8F0, size 0x4, align 4
    DamageTypes_t m_bitsDamageInflict; // offset 0x8F4, size 0x4, align 4
    int32 m_damageModel; // offset 0x8F8, size 0x4, align 4
    bool m_bNoDmgForce; // offset 0x8FC, size 0x1, align 1
    char _pad_08FD[0x3]; // offset 0x8FD
    Vector m_vDamageForce; // offset 0x900, size 0xC, align 4
    bool m_thinkAlways; // offset 0x90C, size 0x1, align 1
    char _pad_090D[0x3]; // offset 0x90D
    float32 m_hurtThinkPeriod; // offset 0x910, size 0x4, align 4
    char _pad_0914[0x4]; // offset 0x914
    CEntityIOOutput m_OnHurt; // offset 0x918, size 0x18, align 255
    CEntityIOOutput m_OnHurtPlayer; // offset 0x930, size 0x18, align 255
    CUtlVector< CHandle< CBaseEntity > > m_hurtEntities; // offset 0x948, size 0x18, align 8
    char _pad_0960[0x8]; // offset 0x960
};
