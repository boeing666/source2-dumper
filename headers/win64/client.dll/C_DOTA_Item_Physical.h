#pragma once

class C_DOTA_Item_Physical : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xC70, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xBB0]; // offset 0x0
    CHandle< C_DOTA_Item > m_hItem; // offset 0xBB0, size 0x4, align 4
    bool m_bIsLowPriorityHoverItem; // offset 0xBB4, size 0x1, align 1
    char _pad_0BB5[0x3]; // offset 0xBB5
    CHandle< C_DOTA_Item > m_hOldItem; // offset 0xBB8, size 0x4, align 4
    char _pad_0BBC[0x4]; // offset 0xBBC
    char* m_pszParticleName; // offset 0xBC0, size 0x8, align 8
    ParticleIndex_t m_nFXIndex; // offset 0xBC8, size 0x4, align 255
    bool m_bShowingTooltip; // offset 0xBCC, size 0x1, align 1
    bool m_bShowingSimpleTooltip; // offset 0xBCD, size 0x1, align 1
    char _pad_0BCE[0xA2]; // offset 0xBCE
};
