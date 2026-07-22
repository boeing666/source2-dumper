#pragma once

struct CItemXP::AssignedEarner_t  // sizeof 0x10, align 0xFF [trivial_dtor] (server)
{
    ECurrencySource m_eSource; // offset 0x0, size 0x4, align 4
    int32 m_iBounty; // offset 0x4, size 0x4, align 4
    EDenyDistributionType m_eDenyType; // offset 0x8, size 0x4, align 4
    char _pad_000C[0x4]; // offset 0xC
};
