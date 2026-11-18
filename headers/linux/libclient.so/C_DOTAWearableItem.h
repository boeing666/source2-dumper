#pragma once

class C_DOTAWearableItem : public C_EconWearable /*0x0*/  // sizeof 0xFD0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xF2C]; // offset 0x0
    bool m_bOwnerModelChanged; // offset 0xF2C, size 0x1, align 1
    bool m_bIsGeneratingEconItem; // offset 0xF2D, size 0x1, align 1
    bool m_bIsItemVisibleOnGeneratedEntity; // offset 0xF2E, size 0x1, align 1
    bool m_bHideWearableButDrawAdditionalWearables; // offset 0xF2F, size 0x1, align 1
    CHandle< CBaseAnimatingActivity > m_hAdditionalWearable; // offset 0xF30, size 0x4, align 4
    CHandle< C_DOTAWearableItem > m_hDrawWearable; // offset 0xF34, size 0x4, align 4
    bool m_bHiddenByCombiner; // offset 0xF38, size 0x1, align 1
    bool m_bHiddenByEquipmentSlot; // offset 0xF39, size 0x1, align 1
    bool m_bIsPortrait; // offset 0xF3A, size 0x1, align 1
    char _pad_0F3B[0x1]; // offset 0xF3B
    float32 m_fZDelta; // offset 0xF3C, size 0x4, align 4
    CUtlVector< CStrongHandleCopyable< InfoForResourceTypeIMaterial2 > > m_combinerMaterialOverrideList; // offset 0xF40, size 0x18, align 8
    char _pad_0F58[0x8]; // offset 0xF58
    bool m_bCombinerMaterialOverrideListChanged; // offset 0xF60, size 0x1, align 1
    bool m_bRubickFollower; // offset 0xF61, size 0x1, align 1
    bool m_bHasPlayerModel; // offset 0xF62, size 0x1, align 1
    char _pad_0F63[0x4D]; // offset 0xF63
    CUtlVector< CHandle< CBaseAnimatingActivity > > m_vecAdditionalClientsideWearables; // offset 0xFB0, size 0x18, align 8
    char _pad_0FC8[0x8]; // offset 0xFC8
};
