#pragma once

struct CitadelTrackedAbilityProjectileCreateInfo_t : public CitadelAbilityProjectileCreateInfo_t /*0x0*/  // sizeof 0x138, align 0xFF (server)
{
    char _pad_0000[0x130]; // offset 0x0
    CHandle< CBaseEntity > m_hTrackedTarget; // offset 0x130, size 0x4, align 4
    char _pad_0134[0x4]; // offset 0x134
};
