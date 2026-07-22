#pragma once

class C_DOTA_Item_DataDriven : public C_DOTA_Item /*0x0*/  // sizeof 0x7F0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x758]; // offset 0x0
    bool m_bProcsMagicStick; // offset 0x758, size 0x1, align 1
    bool m_bIsSharedWithTeammates; // offset 0x759, size 0x1, align 1
    bool m_bCastFilterRejectCaster; // offset 0x75A, size 0x1, align 1
    char _pad_075B[0x1]; // offset 0x75B
    float32 m_fAnimationPlaybackRate; // offset 0x75C, size 0x4, align 4
    float32 m_fAOERadius; // offset 0x760, size 0x4, align 4
    char _pad_0764[0x4]; // offset 0x764
    CUtlVector< KeyValues* > m_ModifierKVDescriptions; // offset 0x768, size 0x18, align 8
    KeyValues* m_pOnChannelFinishKV; // offset 0x780, size 0x8, align 8
    KeyValues* m_pOnChannelSucceededKV; // offset 0x788, size 0x8, align 8
    KeyValues* m_pOnChannelInterruptedKV; // offset 0x790, size 0x8, align 8
    KeyValues* m_pOnOwnerSpawnedKV; // offset 0x798, size 0x8, align 8
    KeyValues* m_pOnOwnerDiedKV; // offset 0x7A0, size 0x8, align 8
    KeyValues* m_pOnProjectileHitUnitKV; // offset 0x7A8, size 0x8, align 8
    KeyValues* m_pOnProjectileFinishKV; // offset 0x7B0, size 0x8, align 8
    KeyValues* m_pOnSpellStartKV; // offset 0x7B8, size 0x8, align 8
    KeyValues* m_pOnAbilityPhaseStartKV; // offset 0x7C0, size 0x8, align 8
    KeyValues* m_pOnToggleOnKV; // offset 0x7C8, size 0x8, align 8
    KeyValues* m_pOnToggleOffKV; // offset 0x7D0, size 0x8, align 8
    KeyValues* m_pOnEquipKV; // offset 0x7D8, size 0x8, align 8
    KeyValues* m_pOnUnequipKV; // offset 0x7E0, size 0x8, align 8
    KeyValues* m_pOnCreatedKV; // offset 0x7E8, size 0x8, align 8
};
