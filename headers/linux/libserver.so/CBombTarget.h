#pragma once

class CBombTarget : public CBaseTrigger /*0x0*/  // sizeof 0xC20, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBC0]; // offset 0x0
    CEntityIOOutput m_OnBombExplode; // offset 0xBC0, size 0x18, align 255
    CEntityIOOutput m_OnBombPlanted; // offset 0xBD8, size 0x18, align 255
    CEntityIOOutput m_OnBombDefused; // offset 0xBF0, size 0x18, align 255
    bool m_bIsBombSiteB; // offset 0xC08, size 0x1, align 1
    bool m_bIsHeistBombTarget; // offset 0xC09, size 0x1, align 1
    bool m_bBombPlantedHere; // offset 0xC0A, size 0x1, align 1
    char _pad_0C0B[0x5]; // offset 0xC0B
    CUtlSymbolLarge m_szMountTarget; // offset 0xC10, size 0x8, align 8
    CHandle< CBaseEntity > m_hInstructorHint; // offset 0xC18, size 0x4, align 4
    int32 m_nBombSiteDesignation; // offset 0xC1C, size 0x4, align 4
};
