#pragma once

class CTakeDamageInfo  // sizeof 0xC8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    Vector m_vecDamageForce; // offset 0x8, size 0xC, align 4
    VectorWS m_vecDamagePosition; // offset 0x14, size 0xC, align 4
    VectorWS m_vecReportedPosition; // offset 0x20, size 0xC, align 4
    Vector m_vecDamageDirection; // offset 0x2C, size 0xC, align 4
    CHandle< C_BaseEntity > m_hInflictor; // offset 0x38, size 0x4, align 4
    CHandle< C_BaseEntity > m_hAttacker; // offset 0x3C, size 0x4, align 4
    CHandle< C_BaseEntity > m_hAbility; // offset 0x40, size 0x4, align 4
    float32 m_flDamage; // offset 0x44, size 0x4, align 4
    float32 m_flTotalledDamage; // offset 0x48, size 0x4, align 4
    DamageTypes_t m_bitsDamageType; // offset 0x4C, size 0x4, align 4
    int32 m_iDamageCustom; // offset 0x50, size 0x4, align 4
    AmmoIndex_t m_iAmmoType; // offset 0x54, size 0x1, align 255
    char _pad_0055[0xB]; // offset 0x55
    float32 m_flOriginalDamage; // offset 0x60, size 0x4, align 4
    bool m_bShouldBleed; // offset 0x64, size 0x1, align 1
    bool m_bShouldSpark; // offset 0x65, size 0x1, align 1
    char _pad_0066[0xA]; // offset 0x66
    TakeDamageFlags_t m_nDamageFlags; // offset 0x70, size 0x8, align 8
    int32 m_bitsDotaDamageType; // offset 0x78, size 0x4, align 4
    int32 m_nDotaDamageCategory; // offset 0x7C, size 0x4, align 4
    float32 m_flCombatLogCreditFactor; // offset 0x80, size 0x4, align 4
    int16 m_iRecord; // offset 0x84, size 0x2, align 2
    char _pad_0086[0x2]; // offset 0x86
    HitGroup_t m_iHitGroupId; // offset 0x88, size 0x4, align 4
    char _pad_008C[0x24]; // offset 0x8C
    CUtlLeanVector< DestructiblePartDamageRequest_t > m_DestructibleHitGroupRequests; // offset 0xB0, size 0x10, align 8
    bool m_bInTakeDamageFlow; // offset 0xC0, size 0x1, align 1 | MNotSaved
    char _pad_00C1[0x7]; // offset 0xC1
};
