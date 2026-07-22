#pragma once

class CDotaTutorialNPCBlocker : public CBaseEntity /*0x0*/  // sizeof 0x4B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x498]; // offset 0x0
    CHandle< CDOTA_BaseNPC > m_hAura; // offset 0x498, size 0x4, align 4
    char _pad_049C[0x4]; // offset 0x49C
    CUtlSymbolLarge m_iOtherBlockerName; // offset 0x4A0, size 0x8, align 8
    CHandle< CBaseEntity > m_hOtherBlocker; // offset 0x4A8, size 0x4, align 4
    bool m_bEndPoint; // offset 0x4AC, size 0x1, align 1
    bool m_bEnabled; // offset 0x4AD, size 0x1, align 1
    bool m_bStartDisabled; // offset 0x4AE, size 0x1, align 1
    bool m_bHidden; // offset 0x4AF, size 0x1, align 1
};
