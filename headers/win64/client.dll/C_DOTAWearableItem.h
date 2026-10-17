#pragma once

class C_DOTAWearableItem : public C_EconWearable /*0x0*/  // sizeof 0xDE0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xD40]; // offset 0x0
    bool m_bOwnerModelChanged; // offset 0xD40, size 0x1, align 1
    bool m_bIsGeneratingEconItem; // offset 0xD41, size 0x1, align 1
    bool m_bIsItemVisibleOnGeneratedEntity; // offset 0xD42, size 0x1, align 1
    bool m_bHideWearableButDrawAdditionalWearables; // offset 0xD43, size 0x1, align 1
    CHandle< CBaseAnimatingActivity > m_hAdditionalWearable; // offset 0xD44, size 0x4, align 4
    CHandle< C_DOTAWearableItem > m_hDrawWearable; // offset 0xD48, size 0x4, align 4
    bool m_bHiddenByCombiner; // offset 0xD4C, size 0x1, align 1
    bool m_bHiddenByEquipmentSlot; // offset 0xD4D, size 0x1, align 1
    bool m_bIsPortrait; // offset 0xD4E, size 0x1, align 1
    char _pad_0D4F[0x1]; // offset 0xD4F
    float32 m_fZDelta; // offset 0xD50, size 0x4, align 4
    char _pad_0D54[0x4]; // offset 0xD54
    CUtlVector< CStrongHandleCopyable< InfoForResourceTypeIMaterial2 > > m_combinerMaterialOverrideList; // offset 0xD58, size 0x18, align 8
    char _pad_0D70[0x8]; // offset 0xD70
    bool m_bCombinerMaterialOverrideListChanged; // offset 0xD78, size 0x1, align 1
    bool m_bRubickFollower; // offset 0xD79, size 0x1, align 1
    bool m_bHasPlayerModel; // offset 0xD7A, size 0x1, align 1
    char _pad_0D7B[0x4D]; // offset 0xD7B
    CUtlVector< CHandle< CBaseAnimatingActivity > > m_vecAdditionalClientsideWearables; // offset 0xDC8, size 0x18, align 8
};
