#pragma once

class CTakeDamageResult  // sizeof 0x60, align 0x8 (client) {MGetKV3ClassDefaults}
{
public:
    CTakeDamageInfo* m_pOriginatingInfo; // offset 0x0, size 0x8, align 8 | MKV3TransferSaveOpsForField
    CUtlLeanVector< DestructiblePartDamageRequest_t > m_DestructibleHitGroupRequests; // offset 0x8, size 0x10, align 8
    int32 m_nHealthLost; // offset 0x18, size 0x4, align 4
    int32 m_nHealthBefore; // offset 0x1C, size 0x4, align 4
    float32 m_flDamageDealt; // offset 0x20, size 0x4, align 4
    float32 m_flPreModifiedDamage; // offset 0x24, size 0x4, align 4
    VectorWS m_vDamagePosition; // offset 0x28, size 0xC, align 4
    int32 m_nTotalledHealthLost; // offset 0x34, size 0x4, align 4
    float32 m_flTotalledDamageDealt; // offset 0x38, size 0x4, align 4
    float32 m_flTotalledPreModifiedDamage; // offset 0x3C, size 0x4, align 4
    float32 m_flNewDamageAccumulatorValue; // offset 0x40, size 0x4, align 4
    char _pad_0044[0x4]; // offset 0x44
    TakeDamageFlags_t m_nDamageFlags; // offset 0x48, size 0x8, align 8
    bool m_bWasDamageSuppressed; // offset 0x50, size 0x1, align 1
    bool m_bSuppressFlinch; // offset 0x51, size 0x1, align 1
    char _pad_0052[0x2]; // offset 0x52
    HitGroup_t m_nOverrideFlinchHitGroup; // offset 0x54, size 0x4, align 4
    char _pad_0058[0x8]; // offset 0x58
};
