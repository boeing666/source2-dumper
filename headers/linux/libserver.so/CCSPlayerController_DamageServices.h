#pragma once

class CCSPlayerController_DamageServices : public CPlayerControllerComponent /*0x0*/  // sizeof 0xD8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x40]; // offset 0x0
    int32 m_nSendUpdate; // offset 0x40, size 0x4, align 4
    char _pad_0044[0x4]; // offset 0x44
    CUtlVectorEmbeddedNetworkVar< CDamageRecord > m_DamageList; // offset 0x48, size 0x90, align 8
};
