#pragma once

class CDOTAWearableItem : public CEconWearable /*0x0*/  // sizeof 0x9E8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x9E0]; // offset 0x0
    bool m_bOwnerModelChanged; // offset 0x9E0, size 0x1, align 1
    bool m_bIsGeneratingEconItem; // offset 0x9E1, size 0x1, align 1
    bool m_bIsItemVisibleOnGeneratedEntity; // offset 0x9E2, size 0x1, align 1
    bool m_bHideWearableButDrawAdditionalWearables; // offset 0x9E3, size 0x1, align 1
    CHandle< CBaseAnimatingActivity > m_hAdditionalWearable; // offset 0x9E4, size 0x4, align 4
};
