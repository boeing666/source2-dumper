#pragma once

class CDOTA_Ability_DataDriven : public CDOTABaseAbility /*0x0*/, public CDOTA_ActionRunner /*0x580*/  // sizeof 0x630, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x598]; // offset 0x0
    bool m_bProcsMagicStick; // offset 0x598, size 0x1, align 1
    bool m_bIsSharedWithTeammates; // offset 0x599, size 0x1, align 1
    bool m_bCastFilterRejectCaster; // offset 0x59A, size 0x1, align 1
    char _pad_059B[0x1]; // offset 0x59B
    float32 m_fAOERadius; // offset 0x59C, size 0x4, align 4
    int32 m_CastAnimation; // offset 0x5A0, size 0x4, align 4
    char _pad_05A4[0x4]; // offset 0x5A4
    CUtlVector< KeyValues* > m_ModifierKVDescriptions; // offset 0x5A8, size 0x18, align 8
    KeyValues* m_pOnChannelFinishKV; // offset 0x5C0, size 0x8, align 8
    KeyValues* m_pOnChannelSucceededKV; // offset 0x5C8, size 0x8, align 8
    KeyValues* m_pOnChannelInterruptedKV; // offset 0x5D0, size 0x8, align 8
    KeyValues* m_pOnOwnerSpawnedKV; // offset 0x5D8, size 0x8, align 8
    KeyValues* m_pOnOwnerDiedKV; // offset 0x5E0, size 0x8, align 8
    KeyValues* m_pOnUpgradeKV; // offset 0x5E8, size 0x8, align 8
    KeyValues* m_pOnProjectileHitUnitKV; // offset 0x5F0, size 0x8, align 8
    KeyValues* m_pOnProjectileFinishKV; // offset 0x5F8, size 0x8, align 8
    KeyValues* m_pOnSpellStartKV; // offset 0x600, size 0x8, align 8
    KeyValues* m_pOnAbilityPhaseStartKV; // offset 0x608, size 0x8, align 8
    KeyValues* m_pOnAbilityPhaseInterruptedKV; // offset 0x610, size 0x8, align 8
    KeyValues* m_pOnToggleOnKV; // offset 0x618, size 0x8, align 8
    KeyValues* m_pOnToggleOffKV; // offset 0x620, size 0x8, align 8
    KeyValues* m_pOnCreatedKV; // offset 0x628, size 0x8, align 8
};
