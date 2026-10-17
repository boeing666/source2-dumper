#pragma once

class C_DOTA_Item_Physical : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xDF0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xD34]; // offset 0x0
    CHandle< C_DOTA_Item > m_hItem; // offset 0xD34, size 0x4, align 4
    bool m_bIsLowPriorityHoverItem; // offset 0xD38, size 0x1, align 1
    char _pad_0D39[0x3]; // offset 0xD39
    CHandle< C_DOTA_Item > m_hOldItem; // offset 0xD3C, size 0x4, align 4
    char* m_pszParticleName; // offset 0xD40, size 0x8, align 8
    ParticleIndex_t m_nFXIndex; // offset 0xD48, size 0x4, align 255
    bool m_bShowingTooltip; // offset 0xD4C, size 0x1, align 1
    bool m_bShowingSimpleTooltip; // offset 0xD4D, size 0x1, align 1
    char _pad_0D4E[0xA2]; // offset 0xD4E
};
