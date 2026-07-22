#pragma once

class CLogicAuto : public CBaseEntity /*0x0*/  // sizeof 0x5A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A8]; // offset 0x0
    CEntityIOOutput m_OnMapSpawn; // offset 0x4A8, size 0x18, align 255
    CEntityIOOutput m_OnDemoMapSpawn; // offset 0x4C0, size 0x18, align 255
    CEntityIOOutput m_OnNewGame; // offset 0x4D8, size 0x18, align 255
    CEntityIOOutput m_OnLoadGame; // offset 0x4F0, size 0x18, align 255
    CEntityIOOutput m_OnMapTransition; // offset 0x508, size 0x18, align 255
    CEntityIOOutput m_OnBackgroundMap; // offset 0x520, size 0x18, align 255
    CEntityIOOutput m_OnMultiNewMap; // offset 0x538, size 0x18, align 255
    CEntityIOOutput m_OnMultiNewRound; // offset 0x550, size 0x18, align 255
    CEntityIOOutput m_OnVREnabled; // offset 0x568, size 0x18, align 255
    CEntityIOOutput m_OnVRNotEnabled; // offset 0x580, size 0x18, align 255
    CUtlSymbolLarge m_globalstate; // offset 0x598, size 0x8, align 8
};
