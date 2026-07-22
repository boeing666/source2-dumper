#pragma once

struct COrbSpawner::Bounty_t  // sizeof 0x14, align 0xFF [trivial_dtor] (server)
{
    int32 m_nGoldToGive; // offset 0x0, size 0x4, align 4
    int32 m_nNumOrbs; // offset 0x4, size 0x4, align 4
    EDenyDistributionType m_eDenyType; // offset 0x8, size 0x4, align 4
    ECurrencySource m_eSource; // offset 0xC, size 0x4, align 4
    CHandle< CCitadelPlayerPawn > m_hTarget; // offset 0x10, size 0x4, align 4
};
