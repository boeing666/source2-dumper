#pragma once

class CCSPlayerController_ActionTrackingServices : public CPlayerControllerComponent /*0x0*/  // sizeof 0x430, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x40]; // offset 0x0
    CUtlVectorEmbeddedNetworkVar< CSPerRoundStats_t > m_perRoundStats; // offset 0x40, size 0x88, align 8
    CSMatchStats_t m_matchStats; // offset 0xC8, size 0xC0, align 255
    int32 m_iNumRoundKills; // offset 0x188, size 0x4, align 4
    int32 m_iNumRoundKillsHeadshots; // offset 0x18C, size 0x4, align 4
    float32 m_flTotalRoundDamageDealt; // offset 0x190, size 0x4, align 4
    char _pad_0194[0x29C]; // offset 0x194
};
