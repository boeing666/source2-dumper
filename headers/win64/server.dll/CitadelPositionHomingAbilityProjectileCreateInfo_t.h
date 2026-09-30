#pragma once

struct CitadelPositionHomingAbilityProjectileCreateInfo_t : public CitadelAbilityProjectileCreateInfo_t /*0x0*/  // sizeof 0x140, align 0xFF (server)
{
    char _pad_0000[0x130]; // offset 0x0
    VectorWS m_vecHomingPosition; // offset 0x130, size 0xC, align 4
    char _pad_013C[0x4]; // offset 0x13C
};
