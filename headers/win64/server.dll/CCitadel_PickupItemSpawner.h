#pragma once

class CCitadel_PickupItemSpawner : public CBaseAnimGraph /*0x0*/  // sizeof 0xAB0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xA98]; // offset 0x0
    GameTime_t m_tNextDropTime; // offset 0xA98, size 0x4, align 255
    GameTime_t m_tNextPingTime; // offset 0xA9C, size 0x4, align 255
    bool m_bPingedPowerup; // offset 0xAA0, size 0x1, align 1
    bool m_bPowerupActive; // offset 0xAA1, size 0x1, align 1
    char _pad_0AA2[0xE]; // offset 0xAA2
};
