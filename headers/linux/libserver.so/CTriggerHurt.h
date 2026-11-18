#pragma once

class CTriggerHurt : public CBaseTrigger /*0x0*/  // sizeof 0xD90, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xD0C]; // offset 0x0
    float32 m_flOriginalDamage; // offset 0xD0C, size 0x4, align 4
    float32 m_flDamage; // offset 0xD10, size 0x4, align 4
    float32 m_flDamageCap; // offset 0xD14, size 0x4, align 4
    GameTime_t m_flLastDmgTime; // offset 0xD18, size 0x4, align 255
    float32 m_flForgivenessDelay; // offset 0xD1C, size 0x4, align 4
    DamageTypes_t m_bitsDamageInflict; // offset 0xD20, size 0x4, align 4
    int32 m_damageModel; // offset 0xD24, size 0x4, align 4
    bool m_bNoDmgForce; // offset 0xD28, size 0x1, align 1
    char _pad_0D29[0x3]; // offset 0xD29
    Vector m_vDamageForce; // offset 0xD2C, size 0xC, align 4
    bool m_thinkAlways; // offset 0xD38, size 0x1, align 1
    char _pad_0D39[0x3]; // offset 0xD39
    float32 m_hurtThinkPeriod; // offset 0xD3C, size 0x4, align 4
    CEntityIOOutput m_OnHurt; // offset 0xD40, size 0x18, align 255
    CEntityIOOutput m_OnHurtPlayer; // offset 0xD58, size 0x18, align 255
    CUtlVector< CHandle< CBaseEntity > > m_hurtEntities; // offset 0xD70, size 0x18, align 8
    char _pad_0D88[0x8]; // offset 0xD88
};
