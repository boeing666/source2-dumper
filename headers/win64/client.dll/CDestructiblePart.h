#pragma once

class CDestructiblePart  // sizeof 0x50, align 0x8 (client) {MGetKV3ClassDefaults MModelGameData MFgdHelper}
{
public:
    CGlobalSymbol m_DebugName; // offset 0x0, size 0x8, align 8 | MPropertySuppressField
    HitGroup_t m_nHitGroup; // offset 0x8, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription
    bool m_bDisableHitGroupWhenDestroyed; // offset 0xC, size 0x1, align 1 | MPropertyDescription MPropertyFriendlyName
    char _pad_000D[0x3]; // offset 0xD
    CUtlVector< HitGroup_t > m_nOtherHitgroupsToDestroyWhenFullyDestructed; // offset 0x10, size 0x18, align 8 | MPropertyDescription
    bool m_bOnlyDestroyWhenGibbing; // offset 0x28, size 0x1, align 1 | MPropertyStartGroup MPropertyDescription
    char _pad_0029[0x7]; // offset 0x29
    CGlobalSymbol m_sBodyGroupName; // offset 0x30, size 0x8, align 8 | MPropertyStartGroup MPropertyDescription MPropertyAttributeEditor
    CUtlVector< CDestructiblePart_DamageLevel > m_DamageLevels; // offset 0x38, size 0x18, align 8 | MPropertyStartGroup MPropertyDescription MPropertyFriendlyName MPropertyAutoExpandSelf
};
