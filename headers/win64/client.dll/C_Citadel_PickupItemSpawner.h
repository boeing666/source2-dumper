#pragma once

class C_Citadel_PickupItemSpawner : public CBaseAnimGraph /*0x0*/  // sizeof 0xE08, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xE00]; // offset 0x0
    GameTime_t m_tNextDropTime; // offset 0xE00, size 0x4, align 255
    bool m_bPowerupActive; // offset 0xE04, size 0x1, align 1
    char _pad_0E05[0x3]; // offset 0xE05
};
