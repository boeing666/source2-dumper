#pragma once

struct CitadelPositionHomingAbilityProjectileCreateInfo_t : public CitadelAbilityProjectileCreateInfo_t /*0x0*/  // sizeof 0x70, align 0xFF (server)
{
    char _pad_0000[0x60]; // offset 0x0
    Vector m_vecHomingPosition; // offset 0x60, size 0xC, align 4
    char _pad_006C[0x4]; // offset 0x6C
};
