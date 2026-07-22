#pragma once

class CLogicAuto : public CBaseEntity /*0x0*/  // sizeof 0x880, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x788]; // offset 0x0
    CEntityIOOutput m_OnMapSpawn; // offset 0x788, size 0x18, align 255
    CEntityIOOutput m_OnDemoMapSpawn; // offset 0x7A0, size 0x18, align 255
    CEntityIOOutput m_OnNewGame; // offset 0x7B8, size 0x18, align 255
    CEntityIOOutput m_OnLoadGame; // offset 0x7D0, size 0x18, align 255
    CEntityIOOutput m_OnMapTransition; // offset 0x7E8, size 0x18, align 255
    CEntityIOOutput m_OnBackgroundMap; // offset 0x800, size 0x18, align 255
    CEntityIOOutput m_OnMultiNewMap; // offset 0x818, size 0x18, align 255
    CEntityIOOutput m_OnMultiNewRound; // offset 0x830, size 0x18, align 255
    CEntityIOOutput m_OnVREnabled; // offset 0x848, size 0x18, align 255
    CEntityIOOutput m_OnVRNotEnabled; // offset 0x860, size 0x18, align 255
    CUtlSymbolLarge m_globalstate; // offset 0x878, size 0x8, align 8
};
