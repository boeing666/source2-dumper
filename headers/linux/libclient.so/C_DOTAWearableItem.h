#pragma once

class C_DOTAWearableItem : public C_EconWearable /*0x0*/  // sizeof 0xE88, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xDEC]; // offset 0x0
    bool m_bOwnerModelChanged; // offset 0xDEC, size 0x1, align 1
    bool m_bIsGeneratingEconItem; // offset 0xDED, size 0x1, align 1
    bool m_bIsItemVisibleOnGeneratedEntity; // offset 0xDEE, size 0x1, align 1
    bool m_bHideWearableButDrawAdditionalWearables; // offset 0xDEF, size 0x1, align 1
    CHandle< CBaseAnimatingActivity > m_hAdditionalWearable; // offset 0xDF0, size 0x4, align 4
    CHandle< C_DOTAWearableItem > m_hDrawWearable; // offset 0xDF4, size 0x4, align 4
    bool m_bHiddenByCombiner; // offset 0xDF8, size 0x1, align 1
    bool m_bHiddenByEquipmentSlot; // offset 0xDF9, size 0x1, align 1
    bool m_bIsPortrait; // offset 0xDFA, size 0x1, align 1
    char _pad_0DFB[0x1]; // offset 0xDFB
    float32 m_fZDelta; // offset 0xDFC, size 0x4, align 4
    CUtlVector< CStrongHandleCopyable< InfoForResourceTypeIMaterial2 > > m_combinerMaterialOverrideList; // offset 0xE00, size 0x18, align 8
    char _pad_0E18[0x8]; // offset 0xE18
    bool m_bCombinerMaterialOverrideListChanged; // offset 0xE20, size 0x1, align 1
    bool m_bRubickFollower; // offset 0xE21, size 0x1, align 1
    bool m_bHasPlayerModel; // offset 0xE22, size 0x1, align 1
    char _pad_0E23[0x4D]; // offset 0xE23
    CUtlVector< CHandle< CBaseAnimatingActivity > > m_vecAdditionalClientsideWearables; // offset 0xE70, size 0x18, align 8
};
