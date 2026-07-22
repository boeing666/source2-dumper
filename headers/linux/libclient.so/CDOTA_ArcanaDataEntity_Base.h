#pragma once

class CDOTA_ArcanaDataEntity_Base  // sizeof 0x30, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CNetworkVarChainer __m_pChainEntity; // offset 0x8, size 0x28, align 255 | MNotSaved
};
