#pragma once

class CCSPlayerController_ActionTrackingServices : public CPlayerControllerComponent /*0x0*/  // sizeof 0x138, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x40]; // offset 0x0
    C_UtlVectorEmbeddedNetworkVar< CSPerRoundStats_t > m_perRoundStats; // offset 0x40, size 0x68, align 8
    CSMatchStats_t m_matchStats; // offset 0xA8, size 0x80, align 255
    int32 m_iNumRoundKills; // offset 0x128, size 0x4, align 4
    int32 m_iNumRoundKillsHeadshots; // offset 0x12C, size 0x4, align 4
    float32 m_flTotalRoundDamageDealt; // offset 0x130, size 0x4, align 4
    char _pad_0134[0x4]; // offset 0x134
};
