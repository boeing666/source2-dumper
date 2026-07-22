#pragma once

class CDOTAWearableItem : public CEconWearable /*0x0*/  // sizeof 0x908, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x900]; // offset 0x0
    bool m_bOwnerModelChanged; // offset 0x900, size 0x1, align 1
    bool m_bIsGeneratingEconItem; // offset 0x901, size 0x1, align 1
    bool m_bIsItemVisibleOnGeneratedEntity; // offset 0x902, size 0x1, align 1
    bool m_bHideWearableButDrawAdditionalWearables; // offset 0x903, size 0x1, align 1
    CHandle< CBaseAnimatingActivity > m_hAdditionalWearable; // offset 0x904, size 0x4, align 4
};
