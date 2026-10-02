#pragma once

class CCitadel_PickupItemSpawner : public CBaseAnimGraph /*0x0*/  // sizeof 0xB00, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xAE8]; // offset 0x0
    GameTime_t m_tNextDropTime; // offset 0xAE8, size 0x4, align 255
    GameTime_t m_tNextPingTime; // offset 0xAEC, size 0x4, align 255
    bool m_bPingedPowerup; // offset 0xAF0, size 0x1, align 1
    bool m_bPowerupActive; // offset 0xAF1, size 0x1, align 1
    char _pad_0AF2[0xE]; // offset 0xAF2
};
