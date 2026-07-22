#pragma once

class C_DOTA_Item_DataDriven : public C_DOTA_Item /*0x0*/  // sizeof 0x960, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x8C9]; // offset 0x0
    bool m_bProcsMagicStick; // offset 0x8C9, size 0x1, align 1
    bool m_bIsSharedWithTeammates; // offset 0x8CA, size 0x1, align 1
    bool m_bCastFilterRejectCaster; // offset 0x8CB, size 0x1, align 1
    float32 m_fAnimationPlaybackRate; // offset 0x8CC, size 0x4, align 4
    float32 m_fAOERadius; // offset 0x8D0, size 0x4, align 4
    char _pad_08D4[0x4]; // offset 0x8D4
    CUtlVector< KeyValues* > m_ModifierKVDescriptions; // offset 0x8D8, size 0x18, align 8
    KeyValues* m_pOnChannelFinishKV; // offset 0x8F0, size 0x8, align 8
    KeyValues* m_pOnChannelSucceededKV; // offset 0x8F8, size 0x8, align 8
    KeyValues* m_pOnChannelInterruptedKV; // offset 0x900, size 0x8, align 8
    KeyValues* m_pOnOwnerSpawnedKV; // offset 0x908, size 0x8, align 8
    KeyValues* m_pOnOwnerDiedKV; // offset 0x910, size 0x8, align 8
    KeyValues* m_pOnProjectileHitUnitKV; // offset 0x918, size 0x8, align 8
    KeyValues* m_pOnProjectileFinishKV; // offset 0x920, size 0x8, align 8
    KeyValues* m_pOnSpellStartKV; // offset 0x928, size 0x8, align 8
    KeyValues* m_pOnAbilityPhaseStartKV; // offset 0x930, size 0x8, align 8
    KeyValues* m_pOnToggleOnKV; // offset 0x938, size 0x8, align 8
    KeyValues* m_pOnToggleOffKV; // offset 0x940, size 0x8, align 8
    KeyValues* m_pOnEquipKV; // offset 0x948, size 0x8, align 8
    KeyValues* m_pOnUnequipKV; // offset 0x950, size 0x8, align 8
    KeyValues* m_pOnCreatedKV; // offset 0x958, size 0x8, align 8
};
