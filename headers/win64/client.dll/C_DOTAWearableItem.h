#pragma once

class C_DOTAWearableItem : public C_EconWearable /*0x0*/  // sizeof 0xD08, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xC68]; // offset 0x0
    bool m_bOwnerModelChanged; // offset 0xC68, size 0x1, align 1
    bool m_bIsGeneratingEconItem; // offset 0xC69, size 0x1, align 1
    bool m_bIsItemVisibleOnGeneratedEntity; // offset 0xC6A, size 0x1, align 1
    bool m_bHideWearableButDrawAdditionalWearables; // offset 0xC6B, size 0x1, align 1
    CHandle< CBaseAnimatingActivity > m_hAdditionalWearable; // offset 0xC6C, size 0x4, align 4
    CHandle< C_DOTAWearableItem > m_hDrawWearable; // offset 0xC70, size 0x4, align 4
    bool m_bHiddenByCombiner; // offset 0xC74, size 0x1, align 1
    bool m_bHiddenByEquipmentSlot; // offset 0xC75, size 0x1, align 1
    bool m_bIsPortrait; // offset 0xC76, size 0x1, align 1
    char _pad_0C77[0x1]; // offset 0xC77
    float32 m_fZDelta; // offset 0xC78, size 0x4, align 4
    char _pad_0C7C[0x4]; // offset 0xC7C
    CUtlVector< CStrongHandleCopyable< InfoForResourceTypeIMaterial2 > > m_combinerMaterialOverrideList; // offset 0xC80, size 0x18, align 8
    char _pad_0C98[0x8]; // offset 0xC98
    bool m_bCombinerMaterialOverrideListChanged; // offset 0xCA0, size 0x1, align 1
    bool m_bRubickFollower; // offset 0xCA1, size 0x1, align 1
    bool m_bHasPlayerModel; // offset 0xCA2, size 0x1, align 1
    char _pad_0CA3[0x4D]; // offset 0xCA3
    CUtlVector< CHandle< CBaseAnimatingActivity > > m_vecAdditionalClientsideWearables; // offset 0xCF0, size 0x18, align 8
};
