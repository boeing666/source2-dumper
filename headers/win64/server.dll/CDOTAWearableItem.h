#pragma once

class CDOTAWearableItem : public CEconWearable /*0x0*/  // sizeof 0xA48, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA40]; // offset 0x0
    bool m_bOwnerModelChanged; // offset 0xA40, size 0x1, align 1
    bool m_bIsGeneratingEconItem; // offset 0xA41, size 0x1, align 1
    bool m_bIsItemVisibleOnGeneratedEntity; // offset 0xA42, size 0x1, align 1
    bool m_bHideWearableButDrawAdditionalWearables; // offset 0xA43, size 0x1, align 1
    CHandle< CBaseAnimatingActivity > m_hAdditionalWearable; // offset 0xA44, size 0x4, align 4
};
