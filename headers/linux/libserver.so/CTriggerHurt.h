#pragma once

class CTriggerHurt : public CBaseTrigger /*0x0*/  // sizeof 0xC48, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBC4]; // offset 0x0
    float32 m_flOriginalDamage; // offset 0xBC4, size 0x4, align 4
    float32 m_flDamage; // offset 0xBC8, size 0x4, align 4
    float32 m_flDamageCap; // offset 0xBCC, size 0x4, align 4
    GameTime_t m_flLastDmgTime; // offset 0xBD0, size 0x4, align 255
    float32 m_flForgivenessDelay; // offset 0xBD4, size 0x4, align 4
    DamageTypes_t m_bitsDamageInflict; // offset 0xBD8, size 0x4, align 4
    int32 m_damageModel; // offset 0xBDC, size 0x4, align 4
    bool m_bNoDmgForce; // offset 0xBE0, size 0x1, align 1
    char _pad_0BE1[0x3]; // offset 0xBE1
    Vector m_vDamageForce; // offset 0xBE4, size 0xC, align 4
    bool m_thinkAlways; // offset 0xBF0, size 0x1, align 1
    char _pad_0BF1[0x3]; // offset 0xBF1
    float32 m_hurtThinkPeriod; // offset 0xBF4, size 0x4, align 4
    CEntityIOOutput m_OnHurt; // offset 0xBF8, size 0x18, align 255
    CEntityIOOutput m_OnHurtPlayer; // offset 0xC10, size 0x18, align 255
    CUtlVector< CHandle< CBaseEntity > > m_hurtEntities; // offset 0xC28, size 0x18, align 8
    char _pad_0C40[0x8]; // offset 0xC40
};
