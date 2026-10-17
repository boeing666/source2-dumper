#pragma once

class CTriggerHurt : public CBaseTrigger /*0x0*/  // sizeof 0xD28, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xCA4]; // offset 0x0
    float32 m_flOriginalDamage; // offset 0xCA4, size 0x4, align 4
    float32 m_flDamage; // offset 0xCA8, size 0x4, align 4
    float32 m_flDamageCap; // offset 0xCAC, size 0x4, align 4
    GameTime_t m_flLastDmgTime; // offset 0xCB0, size 0x4, align 255
    float32 m_flForgivenessDelay; // offset 0xCB4, size 0x4, align 4
    DamageTypes_t m_bitsDamageInflict; // offset 0xCB8, size 0x4, align 4
    int32 m_damageModel; // offset 0xCBC, size 0x4, align 4
    bool m_bNoDmgForce; // offset 0xCC0, size 0x1, align 1
    char _pad_0CC1[0x3]; // offset 0xCC1
    Vector m_vDamageForce; // offset 0xCC4, size 0xC, align 4
    bool m_thinkAlways; // offset 0xCD0, size 0x1, align 1
    char _pad_0CD1[0x3]; // offset 0xCD1
    float32 m_hurtThinkPeriod; // offset 0xCD4, size 0x4, align 4
    CEntityIOOutput m_OnHurt; // offset 0xCD8, size 0x18, align 255
    CEntityIOOutput m_OnHurtPlayer; // offset 0xCF0, size 0x18, align 255
    CUtlVector< CHandle< CBaseEntity > > m_hurtEntities; // offset 0xD08, size 0x18, align 8
    char _pad_0D20[0x8]; // offset 0xD20
};
