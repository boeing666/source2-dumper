#pragma once

class CDOTA_Ability_DataDriven : public CDOTABaseAbility /*0x0*/, public CDOTA_ActionRunner /*0x860*/  // sizeof 0x910, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x878]; // offset 0x0
    bool m_bProcsMagicStick; // offset 0x878, size 0x1, align 1
    bool m_bIsSharedWithTeammates; // offset 0x879, size 0x1, align 1
    bool m_bCastFilterRejectCaster; // offset 0x87A, size 0x1, align 1
    char _pad_087B[0x1]; // offset 0x87B
    float32 m_fAOERadius; // offset 0x87C, size 0x4, align 4
    int32 m_CastAnimation; // offset 0x880, size 0x4, align 4
    char _pad_0884[0x4]; // offset 0x884
    CUtlVector< KeyValues* > m_ModifierKVDescriptions; // offset 0x888, size 0x18, align 8
    KeyValues* m_pOnChannelFinishKV; // offset 0x8A0, size 0x8, align 8
    KeyValues* m_pOnChannelSucceededKV; // offset 0x8A8, size 0x8, align 8
    KeyValues* m_pOnChannelInterruptedKV; // offset 0x8B0, size 0x8, align 8
    KeyValues* m_pOnOwnerSpawnedKV; // offset 0x8B8, size 0x8, align 8
    KeyValues* m_pOnOwnerDiedKV; // offset 0x8C0, size 0x8, align 8
    KeyValues* m_pOnUpgradeKV; // offset 0x8C8, size 0x8, align 8
    KeyValues* m_pOnProjectileHitUnitKV; // offset 0x8D0, size 0x8, align 8
    KeyValues* m_pOnProjectileFinishKV; // offset 0x8D8, size 0x8, align 8
    KeyValues* m_pOnSpellStartKV; // offset 0x8E0, size 0x8, align 8
    KeyValues* m_pOnAbilityPhaseStartKV; // offset 0x8E8, size 0x8, align 8
    KeyValues* m_pOnAbilityPhaseInterruptedKV; // offset 0x8F0, size 0x8, align 8
    KeyValues* m_pOnToggleOnKV; // offset 0x8F8, size 0x8, align 8
    KeyValues* m_pOnToggleOffKV; // offset 0x900, size 0x8, align 8
    KeyValues* m_pOnCreatedKV; // offset 0x908, size 0x8, align 8
};
