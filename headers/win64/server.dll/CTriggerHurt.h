#pragma once

class CTriggerHurt : public CBaseTrigger /*0x0*/  // sizeof 0xA50, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x9C8]; // offset 0x0
    float32 m_flOriginalDamage; // offset 0x9C8, size 0x4, align 4
    float32 m_flDamage; // offset 0x9CC, size 0x4, align 4
    float32 m_flDamageCap; // offset 0x9D0, size 0x4, align 4
    GameTime_t m_flLastDmgTime; // offset 0x9D4, size 0x4, align 255
    float32 m_flForgivenessDelay; // offset 0x9D8, size 0x4, align 4
    DamageTypes_t m_bitsDamageInflict; // offset 0x9DC, size 0x4, align 4
    int32 m_damageModel; // offset 0x9E0, size 0x4, align 4
    bool m_bNoDmgForce; // offset 0x9E4, size 0x1, align 1
    char _pad_09E5[0x3]; // offset 0x9E5
    Vector m_vDamageForce; // offset 0x9E8, size 0xC, align 4
    bool m_thinkAlways; // offset 0x9F4, size 0x1, align 1
    char _pad_09F5[0x3]; // offset 0x9F5
    float32 m_hurtThinkPeriod; // offset 0x9F8, size 0x4, align 4
    char _pad_09FC[0x4]; // offset 0x9FC
    CEntityIOOutput m_OnHurt; // offset 0xA00, size 0x18, align 255
    CEntityIOOutput m_OnHurtPlayer; // offset 0xA18, size 0x18, align 255
    CUtlVector< CHandle< CBaseEntity > > m_hurtEntities; // offset 0xA30, size 0x18, align 8
    char _pad_0A48[0x8]; // offset 0xA48
};
