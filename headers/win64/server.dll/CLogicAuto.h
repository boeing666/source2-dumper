#pragma once

class CLogicAuto : public CBaseEntity /*0x0*/  // sizeof 0x598, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A0]; // offset 0x0
    CEntityIOOutput m_OnMapSpawn; // offset 0x4A0, size 0x18, align 255
    CEntityIOOutput m_OnDemoMapSpawn; // offset 0x4B8, size 0x18, align 255
    CEntityIOOutput m_OnNewGame; // offset 0x4D0, size 0x18, align 255
    CEntityIOOutput m_OnLoadGame; // offset 0x4E8, size 0x18, align 255
    CEntityIOOutput m_OnMapTransition; // offset 0x500, size 0x18, align 255
    CEntityIOOutput m_OnBackgroundMap; // offset 0x518, size 0x18, align 255
    CEntityIOOutput m_OnMultiNewMap; // offset 0x530, size 0x18, align 255
    CEntityIOOutput m_OnMultiNewRound; // offset 0x548, size 0x18, align 255
    CEntityIOOutput m_OnVREnabled; // offset 0x560, size 0x18, align 255
    CEntityIOOutput m_OnVRNotEnabled; // offset 0x578, size 0x18, align 255
    CUtlSymbolLarge m_globalstate; // offset 0x590, size 0x8, align 8
};
