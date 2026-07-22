#pragma once

struct CitadelTrackedAbilityProjectileCreateInfo_t : public CitadelAbilityProjectileCreateInfo_t /*0x0*/  // sizeof 0x68, align 0xFF (server)
{
    char _pad_0000[0x60]; // offset 0x0
    CHandle< CBaseEntity > m_hTrackedTarget; // offset 0x60, size 0x4, align 4
    char _pad_0064[0x4]; // offset 0x64
};
