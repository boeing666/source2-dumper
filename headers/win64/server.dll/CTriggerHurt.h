#pragma once

class CTriggerHurt : public CBaseTrigger /*0x0*/  // sizeof 0xA78, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x9F0]; // offset 0x0
    float32 m_flOriginalDamage; // offset 0x9F0, size 0x4, align 4
    float32 m_flDamage; // offset 0x9F4, size 0x4, align 4
    float32 m_flDamageCap; // offset 0x9F8, size 0x4, align 4
    GameTime_t m_flLastDmgTime; // offset 0x9FC, size 0x4, align 255
    float32 m_flForgivenessDelay; // offset 0xA00, size 0x4, align 4
    DamageTypes_t m_bitsDamageInflict; // offset 0xA04, size 0x4, align 4
    int32 m_damageModel; // offset 0xA08, size 0x4, align 4
    bool m_bNoDmgForce; // offset 0xA0C, size 0x1, align 1
    char _pad_0A0D[0x3]; // offset 0xA0D
    Vector m_vDamageForce; // offset 0xA10, size 0xC, align 4
    bool m_thinkAlways; // offset 0xA1C, size 0x1, align 1
    char _pad_0A1D[0x3]; // offset 0xA1D
    float32 m_hurtThinkPeriod; // offset 0xA20, size 0x4, align 4
    char _pad_0A24[0x4]; // offset 0xA24
    CEntityIOOutput m_OnHurt; // offset 0xA28, size 0x18, align 255
    CEntityIOOutput m_OnHurtPlayer; // offset 0xA40, size 0x18, align 255
    CUtlVector< CHandle< CBaseEntity > > m_hurtEntities; // offset 0xA58, size 0x18, align 8
    char _pad_0A70[0x8]; // offset 0xA70
};
