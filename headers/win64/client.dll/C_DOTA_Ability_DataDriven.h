#pragma once

class C_DOTA_Ability_DataDriven : public C_DOTABaseAbility /*0x0*/  // sizeof 0x740, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    bool m_bProcsMagicStick; // offset 0x6A8, size 0x1, align 1
    bool m_bIsSharedWithTeammates; // offset 0x6A9, size 0x1, align 1
    bool m_bCastFilterRejectCaster; // offset 0x6AA, size 0x1, align 1
    char _pad_06AB[0x1]; // offset 0x6AB
    float32 m_fAOERadius; // offset 0x6AC, size 0x4, align 4
    int32 m_CastAnimation; // offset 0x6B0, size 0x4, align 4
    char _pad_06B4[0x4]; // offset 0x6B4
    CUtlVector< KeyValues* > m_ModifierKVDescriptions; // offset 0x6B8, size 0x18, align 8
    KeyValues* m_pOnChannelFinishKV; // offset 0x6D0, size 0x8, align 8
    KeyValues* m_pOnChannelSucceededKV; // offset 0x6D8, size 0x8, align 8
    KeyValues* m_pOnChannelInterruptedKV; // offset 0x6E0, size 0x8, align 8
    KeyValues* m_pOnOwnerSpawnedKV; // offset 0x6E8, size 0x8, align 8
    KeyValues* m_pOnOwnerDiedKV; // offset 0x6F0, size 0x8, align 8
    KeyValues* m_pOnUpgradeKV; // offset 0x6F8, size 0x8, align 8
    KeyValues* m_pOnProjectileHitUnitKV; // offset 0x700, size 0x8, align 8
    KeyValues* m_pOnProjectileFinishKV; // offset 0x708, size 0x8, align 8
    KeyValues* m_pOnSpellStartKV; // offset 0x710, size 0x8, align 8
    KeyValues* m_pOnAbilityPhaseStartKV; // offset 0x718, size 0x8, align 8
    KeyValues* m_pOnAbilityPhaseInterruptedKV; // offset 0x720, size 0x8, align 8
    KeyValues* m_pOnToggleOnKV; // offset 0x728, size 0x8, align 8
    KeyValues* m_pOnToggleOffKV; // offset 0x730, size 0x8, align 8
    KeyValues* m_pOnCreatedKV; // offset 0x738, size 0x8, align 8
};
