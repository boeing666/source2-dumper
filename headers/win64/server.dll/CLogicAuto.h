#pragma once

class CLogicAuto : public CBaseEntity /*0x0*/  // sizeof 0x590, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x498]; // offset 0x0
    CEntityIOOutput m_OnMapSpawn; // offset 0x498, size 0x18, align 255
    CEntityIOOutput m_OnDemoMapSpawn; // offset 0x4B0, size 0x18, align 255
    CEntityIOOutput m_OnNewGame; // offset 0x4C8, size 0x18, align 255
    CEntityIOOutput m_OnLoadGame; // offset 0x4E0, size 0x18, align 255
    CEntityIOOutput m_OnMapTransition; // offset 0x4F8, size 0x18, align 255
    CEntityIOOutput m_OnBackgroundMap; // offset 0x510, size 0x18, align 255
    CEntityIOOutput m_OnMultiNewMap; // offset 0x528, size 0x18, align 255
    CEntityIOOutput m_OnMultiNewRound; // offset 0x540, size 0x18, align 255
    CEntityIOOutput m_OnVREnabled; // offset 0x558, size 0x18, align 255
    CEntityIOOutput m_OnVRNotEnabled; // offset 0x570, size 0x18, align 255
    CUtlSymbolLarge m_globalstate; // offset 0x588, size 0x8, align 8
};
