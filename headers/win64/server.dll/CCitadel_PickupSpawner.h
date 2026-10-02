#pragma once

class CCitadel_PickupSpawner : public CBaseAnimGraph /*0x0*/  // sizeof 0xB00, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xAE0]; // offset 0x0
    CUtlSymbolLarge m_iszPickupSubclass; // offset 0xAE0, size 0x8, align 8
    float32 m_flOverrideSpawnDelay; // offset 0xAE8, size 0x4, align 4
    float32 m_flOverrideRespawnTime; // offset 0xAEC, size 0x4, align 4
    char _pad_0AF0[0x10]; // offset 0xAF0
};
