#pragma once

class CTriggerHurt : public CBaseTrigger /*0x0*/  // sizeof 0xAB8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA30]; // offset 0x0
    float32 m_flOriginalDamage; // offset 0xA30, size 0x4, align 4
    float32 m_flDamage; // offset 0xA34, size 0x4, align 4
    float32 m_flDamageCap; // offset 0xA38, size 0x4, align 4
    GameTime_t m_flLastDmgTime; // offset 0xA3C, size 0x4, align 255
    float32 m_flForgivenessDelay; // offset 0xA40, size 0x4, align 4
    DamageTypes_t m_bitsDamageInflict; // offset 0xA44, size 0x4, align 4
    int32 m_damageModel; // offset 0xA48, size 0x4, align 4
    bool m_bNoDmgForce; // offset 0xA4C, size 0x1, align 1
    char _pad_0A4D[0x3]; // offset 0xA4D
    Vector m_vDamageForce; // offset 0xA50, size 0xC, align 4
    bool m_thinkAlways; // offset 0xA5C, size 0x1, align 1
    char _pad_0A5D[0x3]; // offset 0xA5D
    float32 m_hurtThinkPeriod; // offset 0xA60, size 0x4, align 4
    char _pad_0A64[0x4]; // offset 0xA64
    CEntityIOOutput m_OnHurt; // offset 0xA68, size 0x18, align 255
    CEntityIOOutput m_OnHurtPlayer; // offset 0xA80, size 0x18, align 255
    CUtlVector< CHandle< CBaseEntity > > m_hurtEntities; // offset 0xA98, size 0x18, align 8
    char _pad_0AB0[0x8]; // offset 0xAB0
};
