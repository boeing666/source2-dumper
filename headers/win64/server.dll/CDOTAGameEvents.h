#pragma once

class CDOTAGameEvents : public CBaseEntity /*0x0*/  // sizeof 0x528, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x498]; // offset 0x0
    CEntityIOOutput m_OnDayStarted; // offset 0x498, size 0x18, align 255
    CEntityIOOutput m_OnNightStarted; // offset 0x4B0, size 0x18, align 255
    CEntityIOOutput m_OnRadiantFortDestroyed; // offset 0x4C8, size 0x18, align 255
    CEntityIOOutput m_OnDireFortDestroyed; // offset 0x4E0, size 0x18, align 255
    CEntityIOOutput m_OnGameEnded; // offset 0x4F8, size 0x18, align 255
    CEntityIOOutput m_OnGameStarted; // offset 0x510, size 0x18, align 255
};
