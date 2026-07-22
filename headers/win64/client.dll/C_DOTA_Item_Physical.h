#pragma once

class C_DOTA_Item_Physical : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xB80, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xAC0]; // offset 0x0
    CHandle< C_DOTA_Item > m_hItem; // offset 0xAC0, size 0x4, align 4
    bool m_bIsLowPriorityHoverItem; // offset 0xAC4, size 0x1, align 1
    char _pad_0AC5[0x3]; // offset 0xAC5
    CHandle< C_DOTA_Item > m_hOldItem; // offset 0xAC8, size 0x4, align 4
    char _pad_0ACC[0x4]; // offset 0xACC
    char* m_pszParticleName; // offset 0xAD0, size 0x8, align 8
    ParticleIndex_t m_nFXIndex; // offset 0xAD8, size 0x4, align 255
    bool m_bShowingTooltip; // offset 0xADC, size 0x1, align 1
    bool m_bShowingSimpleTooltip; // offset 0xADD, size 0x1, align 1
    char _pad_0ADE[0xA2]; // offset 0xADE
};
