#pragma once

class CDOTAWearableItem : public CEconWearable /*0x0*/  // sizeof 0xD28, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xD1C]; // offset 0x0
    bool m_bOwnerModelChanged; // offset 0xD1C, size 0x1, align 1
    bool m_bIsGeneratingEconItem; // offset 0xD1D, size 0x1, align 1
    bool m_bIsItemVisibleOnGeneratedEntity; // offset 0xD1E, size 0x1, align 1
    bool m_bHideWearableButDrawAdditionalWearables; // offset 0xD1F, size 0x1, align 1
    CHandle< CBaseAnimatingActivity > m_hAdditionalWearable; // offset 0xD20, size 0x4, align 4
    char _pad_0D24[0x4]; // offset 0xD24
};
