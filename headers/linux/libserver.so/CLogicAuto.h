#pragma once

class CLogicAuto : public CBaseEntity /*0x0*/  // sizeof 0x870, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    CEntityIOOutput m_OnMapSpawn; // offset 0x778, size 0x18, align 255
    CEntityIOOutput m_OnDemoMapSpawn; // offset 0x790, size 0x18, align 255
    CEntityIOOutput m_OnNewGame; // offset 0x7A8, size 0x18, align 255
    CEntityIOOutput m_OnLoadGame; // offset 0x7C0, size 0x18, align 255
    CEntityIOOutput m_OnMapTransition; // offset 0x7D8, size 0x18, align 255
    CEntityIOOutput m_OnBackgroundMap; // offset 0x7F0, size 0x18, align 255
    CEntityIOOutput m_OnMultiNewMap; // offset 0x808, size 0x18, align 255
    CEntityIOOutput m_OnMultiNewRound; // offset 0x820, size 0x18, align 255
    CEntityIOOutput m_OnVREnabled; // offset 0x838, size 0x18, align 255
    CEntityIOOutput m_OnVRNotEnabled; // offset 0x850, size 0x18, align 255
    CUtlSymbolLarge m_globalstate; // offset 0x868, size 0x8, align 8
};
