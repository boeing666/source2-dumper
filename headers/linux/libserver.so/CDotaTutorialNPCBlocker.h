#pragma once

class CDotaTutorialNPCBlocker : public CBaseEntity /*0x0*/  // sizeof 0x790, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    CHandle< CDOTA_BaseNPC > m_hAura; // offset 0x778, size 0x4, align 4
    char _pad_077C[0x4]; // offset 0x77C
    CUtlSymbolLarge m_iOtherBlockerName; // offset 0x780, size 0x8, align 8
    CHandle< CBaseEntity > m_hOtherBlocker; // offset 0x788, size 0x4, align 4
    bool m_bEndPoint; // offset 0x78C, size 0x1, align 1
    bool m_bEnabled; // offset 0x78D, size 0x1, align 1
    bool m_bStartDisabled; // offset 0x78E, size 0x1, align 1
    bool m_bHidden; // offset 0x78F, size 0x1, align 1
};
