#pragma once

class CDOTAGameEvents : public CBaseEntity /*0x0*/  // sizeof 0x808, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    CEntityIOOutput m_OnDayStarted; // offset 0x778, size 0x18, align 255
    CEntityIOOutput m_OnNightStarted; // offset 0x790, size 0x18, align 255
    CEntityIOOutput m_OnRadiantFortDestroyed; // offset 0x7A8, size 0x18, align 255
    CEntityIOOutput m_OnDireFortDestroyed; // offset 0x7C0, size 0x18, align 255
    CEntityIOOutput m_OnGameEnded; // offset 0x7D8, size 0x18, align 255
    CEntityIOOutput m_OnGameStarted; // offset 0x7F0, size 0x18, align 255
};
