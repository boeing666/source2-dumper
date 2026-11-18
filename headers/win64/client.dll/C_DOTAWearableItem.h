#pragma once

class C_DOTAWearableItem : public C_EconWearable /*0x0*/  // sizeof 0xE48, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xDA0]; // offset 0x0
    bool m_bOwnerModelChanged; // offset 0xDA0, size 0x1, align 1
    bool m_bIsGeneratingEconItem; // offset 0xDA1, size 0x1, align 1
    bool m_bIsItemVisibleOnGeneratedEntity; // offset 0xDA2, size 0x1, align 1
    bool m_bHideWearableButDrawAdditionalWearables; // offset 0xDA3, size 0x1, align 1
    CHandle< CBaseAnimatingActivity > m_hAdditionalWearable; // offset 0xDA4, size 0x4, align 4
    CHandle< C_DOTAWearableItem > m_hDrawWearable; // offset 0xDA8, size 0x4, align 4
    bool m_bHiddenByCombiner; // offset 0xDAC, size 0x1, align 1
    bool m_bHiddenByEquipmentSlot; // offset 0xDAD, size 0x1, align 1
    bool m_bIsPortrait; // offset 0xDAE, size 0x1, align 1
    char _pad_0DAF[0x1]; // offset 0xDAF
    float32 m_fZDelta; // offset 0xDB0, size 0x4, align 4
    char _pad_0DB4[0x4]; // offset 0xDB4
    CUtlVector< CStrongHandleCopyable< InfoForResourceTypeIMaterial2 > > m_combinerMaterialOverrideList; // offset 0xDB8, size 0x18, align 8
    char _pad_0DD0[0x8]; // offset 0xDD0
    bool m_bCombinerMaterialOverrideListChanged; // offset 0xDD8, size 0x1, align 1
    bool m_bRubickFollower; // offset 0xDD9, size 0x1, align 1
    bool m_bHasPlayerModel; // offset 0xDDA, size 0x1, align 1
    char _pad_0DDB[0x4D]; // offset 0xDDB
    CUtlVector< CHandle< CBaseAnimatingActivity > > m_vecAdditionalClientsideWearables; // offset 0xE28, size 0x18, align 8
    char _pad_0E40[0x8]; // offset 0xE40
};
