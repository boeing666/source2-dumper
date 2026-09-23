#pragma once

class CBombTarget : public CBaseTrigger /*0x0*/  // sizeof 0xA28, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x9C8]; // offset 0x0
    CEntityIOOutput m_OnBombExplode; // offset 0x9C8, size 0x18, align 255
    CEntityIOOutput m_OnBombPlanted; // offset 0x9E0, size 0x18, align 255
    CEntityIOOutput m_OnBombDefused; // offset 0x9F8, size 0x18, align 255
    bool m_bIsBombSiteB; // offset 0xA10, size 0x1, align 1
    bool m_bIsHeistBombTarget; // offset 0xA11, size 0x1, align 1
    bool m_bBombPlantedHere; // offset 0xA12, size 0x1, align 1
    char _pad_0A13[0x5]; // offset 0xA13
    CUtlSymbolLarge m_szMountTarget; // offset 0xA18, size 0x8, align 8
    CHandle< CBaseEntity > m_hInstructorHint; // offset 0xA20, size 0x4, align 4
    int32 m_nBombSiteDesignation; // offset 0xA24, size 0x4, align 4
};
