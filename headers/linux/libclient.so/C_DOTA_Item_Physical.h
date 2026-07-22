#pragma once

class C_DOTA_Item_Physical : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xD00, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xC44]; // offset 0x0
    CHandle< C_DOTA_Item > m_hItem; // offset 0xC44, size 0x4, align 4
    bool m_bIsLowPriorityHoverItem; // offset 0xC48, size 0x1, align 1
    char _pad_0C49[0x3]; // offset 0xC49
    CHandle< C_DOTA_Item > m_hOldItem; // offset 0xC4C, size 0x4, align 4
    char* m_pszParticleName; // offset 0xC50, size 0x8, align 8
    ParticleIndex_t m_nFXIndex; // offset 0xC58, size 0x4, align 255
    bool m_bShowingTooltip; // offset 0xC5C, size 0x1, align 1
    bool m_bShowingSimpleTooltip; // offset 0xC5D, size 0x1, align 1
    char _pad_0C5E[0xA2]; // offset 0xC5E
};
