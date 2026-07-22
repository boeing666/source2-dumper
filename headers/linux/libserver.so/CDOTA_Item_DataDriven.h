#pragma once

class CDOTA_Item_DataDriven : public CDOTA_Item /*0x0*/, public CDOTA_ActionRunner /*0x930*/  // sizeof 0x9E0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x948]; // offset 0x0
    bool m_bProcsMagicStick; // offset 0x948, size 0x1, align 1
    bool m_bIsSharedWithTeammates; // offset 0x949, size 0x1, align 1
    bool m_bCastFilterRejectCaster; // offset 0x94A, size 0x1, align 1
    char _pad_094B[0x1]; // offset 0x94B
    float32 m_fAnimationPlaybackRate; // offset 0x94C, size 0x4, align 4
    float32 m_fAOERadius; // offset 0x950, size 0x4, align 4
    char _pad_0954[0x4]; // offset 0x954
    CUtlVector< KeyValues* > m_ModifierKVDescriptions; // offset 0x958, size 0x18, align 8
    KeyValues* m_pOnChannelFinishKV; // offset 0x970, size 0x8, align 8
    KeyValues* m_pOnChannelSucceededKV; // offset 0x978, size 0x8, align 8
    KeyValues* m_pOnChannelInterruptedKV; // offset 0x980, size 0x8, align 8
    KeyValues* m_pOnOwnerSpawnedKV; // offset 0x988, size 0x8, align 8
    KeyValues* m_pOnOwnerDiedKV; // offset 0x990, size 0x8, align 8
    KeyValues* m_pOnProjectileHitUnitKV; // offset 0x998, size 0x8, align 8
    KeyValues* m_pOnProjectileFinishKV; // offset 0x9A0, size 0x8, align 8
    KeyValues* m_pOnSpellStartKV; // offset 0x9A8, size 0x8, align 8
    KeyValues* m_pOnAbilityPhaseStartKV; // offset 0x9B0, size 0x8, align 8
    KeyValues* m_pOnToggleOnKV; // offset 0x9B8, size 0x8, align 8
    KeyValues* m_pOnToggleOffKV; // offset 0x9C0, size 0x8, align 8
    KeyValues* m_pOnEquipKV; // offset 0x9C8, size 0x8, align 8
    KeyValues* m_pOnUnequipKV; // offset 0x9D0, size 0x8, align 8
    KeyValues* m_pOnCreatedKV; // offset 0x9D8, size 0x8, align 8
};
