#pragma once

class C_DOTA_Item_Physical : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xCD0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xC10]; // offset 0x0
    CHandle< C_DOTA_Item > m_hItem; // offset 0xC10, size 0x4, align 4
    bool m_bIsLowPriorityHoverItem; // offset 0xC14, size 0x1, align 1
    char _pad_0C15[0x3]; // offset 0xC15
    CHandle< C_DOTA_Item > m_hOldItem; // offset 0xC18, size 0x4, align 4
    char _pad_0C1C[0x4]; // offset 0xC1C
    char* m_pszParticleName; // offset 0xC20, size 0x8, align 8
    ParticleIndex_t m_nFXIndex; // offset 0xC28, size 0x4, align 255
    bool m_bShowingTooltip; // offset 0xC2C, size 0x1, align 1
    bool m_bShowingSimpleTooltip; // offset 0xC2D, size 0x1, align 1
    char _pad_0C2E[0xA2]; // offset 0xC2E
};
