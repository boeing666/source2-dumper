#pragma once

class CBombTarget : public CBaseTrigger /*0x0*/  // sizeof 0x948, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8E8]; // offset 0x0
    CEntityIOOutput m_OnBombExplode; // offset 0x8E8, size 0x18, align 255
    CEntityIOOutput m_OnBombPlanted; // offset 0x900, size 0x18, align 255
    CEntityIOOutput m_OnBombDefused; // offset 0x918, size 0x18, align 255
    bool m_bIsBombSiteB; // offset 0x930, size 0x1, align 1
    bool m_bIsHeistBombTarget; // offset 0x931, size 0x1, align 1
    bool m_bBombPlantedHere; // offset 0x932, size 0x1, align 1
    char _pad_0933[0x5]; // offset 0x933
    CUtlSymbolLarge m_szMountTarget; // offset 0x938, size 0x8, align 8
    CHandle< CBaseEntity > m_hInstructorHint; // offset 0x940, size 0x4, align 4
    int32 m_nBombSiteDesignation; // offset 0x944, size 0x4, align 4
};
