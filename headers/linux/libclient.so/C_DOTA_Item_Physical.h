#pragma once

class C_DOTA_Item_Physical : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xE58, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xD9C]; // offset 0x0
    CHandle< C_DOTA_Item > m_hItem; // offset 0xD9C, size 0x4, align 4
    bool m_bIsLowPriorityHoverItem; // offset 0xDA0, size 0x1, align 1
    char _pad_0DA1[0x3]; // offset 0xDA1
    CHandle< C_DOTA_Item > m_hOldItem; // offset 0xDA4, size 0x4, align 4
    char* m_pszParticleName; // offset 0xDA8, size 0x8, align 8
    ParticleIndex_t m_nFXIndex; // offset 0xDB0, size 0x4, align 255
    bool m_bShowingTooltip; // offset 0xDB4, size 0x1, align 1
    bool m_bShowingSimpleTooltip; // offset 0xDB5, size 0x1, align 1
    char _pad_0DB6[0xA2]; // offset 0xDB6
};
