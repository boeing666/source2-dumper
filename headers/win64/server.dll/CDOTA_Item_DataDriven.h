#pragma once

class CDOTA_Item_DataDriven : public CDOTA_Item /*0x0*/, public CDOTA_ActionRunner /*0x658*/  // sizeof 0x708, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x670]; // offset 0x0
    bool m_bProcsMagicStick; // offset 0x670, size 0x1, align 1
    bool m_bIsSharedWithTeammates; // offset 0x671, size 0x1, align 1
    bool m_bCastFilterRejectCaster; // offset 0x672, size 0x1, align 1
    char _pad_0673[0x1]; // offset 0x673
    float32 m_fAnimationPlaybackRate; // offset 0x674, size 0x4, align 4
    float32 m_fAOERadius; // offset 0x678, size 0x4, align 4
    char _pad_067C[0x4]; // offset 0x67C
    CUtlVector< KeyValues* > m_ModifierKVDescriptions; // offset 0x680, size 0x18, align 8
    KeyValues* m_pOnChannelFinishKV; // offset 0x698, size 0x8, align 8
    KeyValues* m_pOnChannelSucceededKV; // offset 0x6A0, size 0x8, align 8
    KeyValues* m_pOnChannelInterruptedKV; // offset 0x6A8, size 0x8, align 8
    KeyValues* m_pOnOwnerSpawnedKV; // offset 0x6B0, size 0x8, align 8
    KeyValues* m_pOnOwnerDiedKV; // offset 0x6B8, size 0x8, align 8
    KeyValues* m_pOnProjectileHitUnitKV; // offset 0x6C0, size 0x8, align 8
    KeyValues* m_pOnProjectileFinishKV; // offset 0x6C8, size 0x8, align 8
    KeyValues* m_pOnSpellStartKV; // offset 0x6D0, size 0x8, align 8
    KeyValues* m_pOnAbilityPhaseStartKV; // offset 0x6D8, size 0x8, align 8
    KeyValues* m_pOnToggleOnKV; // offset 0x6E0, size 0x8, align 8
    KeyValues* m_pOnToggleOffKV; // offset 0x6E8, size 0x8, align 8
    KeyValues* m_pOnEquipKV; // offset 0x6F0, size 0x8, align 8
    KeyValues* m_pOnUnequipKV; // offset 0x6F8, size 0x8, align 8
    KeyValues* m_pOnCreatedKV; // offset 0x700, size 0x8, align 8
};
