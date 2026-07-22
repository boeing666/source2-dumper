#pragma once

class CCitadel_PickupItemSpawner : public CBaseAnimGraph /*0x0*/  // sizeof 0xAA0, align 0x10 [vtable] (server) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xA98]; // offset 0x0
    GameTime_t m_tNextDropTime; // offset 0xA98, size 0x4, align 255 | MNetworkEnable
    bool m_bPowerupActive; // offset 0xA9C, size 0x1, align 1 | MNetworkEnable
    char _pad_0A9D[0x3]; // offset 0xA9D
};
