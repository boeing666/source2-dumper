#pragma once

class CTakeDamageInfo  // sizeof 0x118, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
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
    HitGroup_t m_iHitGroupId; // offset 0x78, size 0x4, align 4
    int32 m_nNumObjectsPenetrated; // offset 0x7C, size 0x4, align 4
    float32 m_flFriendlyFireDamageReductionRatio; // offset 0x80, size 0x4, align 4
    bool m_bStoppedBullet; // offset 0x84, size 0x1, align 1
    char _pad_0085[0x7B]; // offset 0x85
    CUtlLeanVector< DestructiblePartDamageRequest_t > m_DestructibleHitGroupRequests; // offset 0x100, size 0x10, align 8
    bool m_bInTakeDamageFlow; // offset 0x110, size 0x1, align 1 | MNotSaved
    char _pad_0111[0x7]; // offset 0x111
};
