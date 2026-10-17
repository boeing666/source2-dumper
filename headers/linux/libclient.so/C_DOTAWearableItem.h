#pragma once

class C_DOTAWearableItem : public C_EconWearable /*0x0*/  // sizeof 0xF60, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xEC4]; // offset 0x0
    bool m_bOwnerModelChanged; // offset 0xEC4, size 0x1, align 1
    bool m_bIsGeneratingEconItem; // offset 0xEC5, size 0x1, align 1
    bool m_bIsItemVisibleOnGeneratedEntity; // offset 0xEC6, size 0x1, align 1
    bool m_bHideWearableButDrawAdditionalWearables; // offset 0xEC7, size 0x1, align 1
    CHandle< CBaseAnimatingActivity > m_hAdditionalWearable; // offset 0xEC8, size 0x4, align 4
    CHandle< C_DOTAWearableItem > m_hDrawWearable; // offset 0xECC, size 0x4, align 4
    bool m_bHiddenByCombiner; // offset 0xED0, size 0x1, align 1
    bool m_bHiddenByEquipmentSlot; // offset 0xED1, size 0x1, align 1
    bool m_bIsPortrait; // offset 0xED2, size 0x1, align 1
    char _pad_0ED3[0x1]; // offset 0xED3
    float32 m_fZDelta; // offset 0xED4, size 0x4, align 4
    CUtlVector< CStrongHandleCopyable< InfoForResourceTypeIMaterial2 > > m_combinerMaterialOverrideList; // offset 0xED8, size 0x18, align 8
    char _pad_0EF0[0x8]; // offset 0xEF0
    bool m_bCombinerMaterialOverrideListChanged; // offset 0xEF8, size 0x1, align 1
    bool m_bRubickFollower; // offset 0xEF9, size 0x1, align 1
    bool m_bHasPlayerModel; // offset 0xEFA, size 0x1, align 1
    char _pad_0EFB[0x4D]; // offset 0xEFB
    CUtlVector< CHandle< CBaseAnimatingActivity > > m_vecAdditionalClientsideWearables; // offset 0xF48, size 0x18, align 8
};
