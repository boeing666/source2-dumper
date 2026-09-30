#pragma once

class CCitadel_PickupSpawner : public CBaseAnimGraph /*0x0*/  // sizeof 0xAB0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xA90]; // offset 0x0
    CUtlSymbolLarge m_iszPickupSubclass; // offset 0xA90, size 0x8, align 8
    float32 m_flOverrideSpawnDelay; // offset 0xA98, size 0x4, align 4
    float32 m_flOverrideRespawnTime; // offset 0xA9C, size 0x4, align 4
    char _pad_0AA0[0x10]; // offset 0xAA0
};
