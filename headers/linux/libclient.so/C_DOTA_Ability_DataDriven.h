#pragma once

class C_DOTA_Ability_DataDriven : public C_DOTABaseAbility /*0x0*/  // sizeof 0x8B8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    bool m_bProcsMagicStick; // offset 0x824, size 0x1, align 1
    bool m_bIsSharedWithTeammates; // offset 0x825, size 0x1, align 1
    bool m_bCastFilterRejectCaster; // offset 0x826, size 0x1, align 1
    char _pad_0827[0x1]; // offset 0x827
    float32 m_fAOERadius; // offset 0x828, size 0x4, align 4
    int32 m_CastAnimation; // offset 0x82C, size 0x4, align 4
    CUtlVector< KeyValues* > m_ModifierKVDescriptions; // offset 0x830, size 0x18, align 8
    KeyValues* m_pOnChannelFinishKV; // offset 0x848, size 0x8, align 8
    KeyValues* m_pOnChannelSucceededKV; // offset 0x850, size 0x8, align 8
    KeyValues* m_pOnChannelInterruptedKV; // offset 0x858, size 0x8, align 8
    KeyValues* m_pOnOwnerSpawnedKV; // offset 0x860, size 0x8, align 8
    KeyValues* m_pOnOwnerDiedKV; // offset 0x868, size 0x8, align 8
    KeyValues* m_pOnUpgradeKV; // offset 0x870, size 0x8, align 8
    KeyValues* m_pOnProjectileHitUnitKV; // offset 0x878, size 0x8, align 8
    KeyValues* m_pOnProjectileFinishKV; // offset 0x880, size 0x8, align 8
    KeyValues* m_pOnSpellStartKV; // offset 0x888, size 0x8, align 8
    KeyValues* m_pOnAbilityPhaseStartKV; // offset 0x890, size 0x8, align 8
    KeyValues* m_pOnAbilityPhaseInterruptedKV; // offset 0x898, size 0x8, align 8
    KeyValues* m_pOnToggleOnKV; // offset 0x8A0, size 0x8, align 8
    KeyValues* m_pOnToggleOffKV; // offset 0x8A8, size 0x8, align 8
    KeyValues* m_pOnCreatedKV; // offset 0x8B0, size 0x8, align 8
};
