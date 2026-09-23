#pragma once

class CTriggerHurt : public CBaseTrigger /*0x0*/  // sizeof 0xD20, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xC9C]; // offset 0x0
    float32 m_flOriginalDamage; // offset 0xC9C, size 0x4, align 4
    float32 m_flDamage; // offset 0xCA0, size 0x4, align 4
    float32 m_flDamageCap; // offset 0xCA4, size 0x4, align 4
    GameTime_t m_flLastDmgTime; // offset 0xCA8, size 0x4, align 255
    float32 m_flForgivenessDelay; // offset 0xCAC, size 0x4, align 4
    DamageTypes_t m_bitsDamageInflict; // offset 0xCB0, size 0x4, align 4
    int32 m_damageModel; // offset 0xCB4, size 0x4, align 4
    bool m_bNoDmgForce; // offset 0xCB8, size 0x1, align 1
    char _pad_0CB9[0x3]; // offset 0xCB9
    Vector m_vDamageForce; // offset 0xCBC, size 0xC, align 4
    bool m_thinkAlways; // offset 0xCC8, size 0x1, align 1
    char _pad_0CC9[0x3]; // offset 0xCC9
    float32 m_hurtThinkPeriod; // offset 0xCCC, size 0x4, align 4
    CEntityIOOutput m_OnHurt; // offset 0xCD0, size 0x18, align 255
    CEntityIOOutput m_OnHurtPlayer; // offset 0xCE8, size 0x18, align 255
    CUtlVector< CHandle< CBaseEntity > > m_hurtEntities; // offset 0xD00, size 0x18, align 8
    char _pad_0D18[0x8]; // offset 0xD18
};
