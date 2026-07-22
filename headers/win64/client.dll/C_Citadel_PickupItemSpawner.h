#pragma once

class C_Citadel_PickupItemSpawner : public CBaseAnimGraph /*0x0*/  // sizeof 0xCB8, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xCB0]; // offset 0x0
    GameTime_t m_tNextDropTime; // offset 0xCB0, size 0x4, align 255 | MNetworkEnable MNetworkChangeCallback
    bool m_bPowerupActive; // offset 0xCB4, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback
    char _pad_0CB5[0x3]; // offset 0xCB5
};
