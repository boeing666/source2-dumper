#pragma once

class CDOTAWearableItem : public CEconWearable /*0x0*/  // sizeof 0xBE0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBD4]; // offset 0x0
    bool m_bOwnerModelChanged; // offset 0xBD4, size 0x1, align 1
    bool m_bIsGeneratingEconItem; // offset 0xBD5, size 0x1, align 1
    bool m_bIsItemVisibleOnGeneratedEntity; // offset 0xBD6, size 0x1, align 1
    bool m_bHideWearableButDrawAdditionalWearables; // offset 0xBD7, size 0x1, align 1
    CHandle< CBaseAnimatingActivity > m_hAdditionalWearable; // offset 0xBD8, size 0x4, align 4
    char _pad_0BDC[0x4]; // offset 0xBDC
};
