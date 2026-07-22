#pragma once

class CCitadelHeroComponent : public CEntityComponent /*0x0*/  // sizeof 0x40, align 0xFF [vtable trivial_dtor] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x18]; // offset 0x0
    CitadelHeroSpawnData_t m_spawnedHero; // offset 0x18, size 0x10, align 255 | MNetworkEnable MNetworkChangeCallback
    CitadelHeroSpawnData_t m_loadingHero; // offset 0x28, size 0x10, align 255 | MNetworkEnable MNetworkPriority
    HeroID_t m_nNoSpawnHeroID; // offset 0x38, size 0x4, align 255 | MNetworkEnable
    char _pad_003C[0x4]; // offset 0x3C
};
