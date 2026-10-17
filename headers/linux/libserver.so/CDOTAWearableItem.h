#pragma once

class CDOTAWearableItem : public CEconWearable /*0x0*/  // sizeof 0xCC0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xCB4]; // offset 0x0
    bool m_bOwnerModelChanged; // offset 0xCB4, size 0x1, align 1
    bool m_bIsGeneratingEconItem; // offset 0xCB5, size 0x1, align 1
    bool m_bIsItemVisibleOnGeneratedEntity; // offset 0xCB6, size 0x1, align 1
    bool m_bHideWearableButDrawAdditionalWearables; // offset 0xCB7, size 0x1, align 1
    CHandle< CBaseAnimatingActivity > m_hAdditionalWearable; // offset 0xCB8, size 0x4, align 4
    char _pad_0CBC[0x4]; // offset 0xCBC
};
