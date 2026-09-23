#pragma once

class CBombTarget : public CBaseTrigger /*0x0*/  // sizeof 0xD00, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xCA0]; // offset 0x0
    CEntityIOOutput m_OnBombExplode; // offset 0xCA0, size 0x18, align 255
    CEntityIOOutput m_OnBombPlanted; // offset 0xCB8, size 0x18, align 255
    CEntityIOOutput m_OnBombDefused; // offset 0xCD0, size 0x18, align 255
    bool m_bIsBombSiteB; // offset 0xCE8, size 0x1, align 1
    bool m_bIsHeistBombTarget; // offset 0xCE9, size 0x1, align 1
    bool m_bBombPlantedHere; // offset 0xCEA, size 0x1, align 1
    char _pad_0CEB[0x5]; // offset 0xCEB
    CUtlSymbolLarge m_szMountTarget; // offset 0xCF0, size 0x8, align 8
    CHandle< CBaseEntity > m_hInstructorHint; // offset 0xCF8, size 0x4, align 4
    int32 m_nBombSiteDesignation; // offset 0xCFC, size 0x4, align 4
};
