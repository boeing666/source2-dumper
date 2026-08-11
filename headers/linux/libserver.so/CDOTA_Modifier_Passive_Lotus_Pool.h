#pragma once

class CDOTA_Modifier_Passive_Lotus_Pool : public CDOTA_Buff /*0x0*/  // sizeof 0x1B18, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 first_lotus_pickup_time; // offset 0x1A78, size 0x4, align 4
    float32 pickup_time_reduction_pct; // offset 0x1A7C, size 0x4, align 4
    float32 min_lotus_pickup_time; // offset 0x1A80, size 0x4, align 4
    float32 think_interval; // offset 0x1A84, size 0x4, align 4
    float32 radius; // offset 0x1A88, size 0x4, align 4
    float32 m_flRemainingPickupTime; // offset 0x1A8C, size 0x4, align 4
    float32 m_flCurrentMaxPickupTime; // offset 0x1A90, size 0x4, align 4
    int32 m_nLotusSeconds; // offset 0x1A94, size 0x4, align 4
    CountdownTimer m_LotusTimer; // offset 0x1A98, size 0x18, align 8
    int32 m_nRespawnSeconds; // offset 0x1AB0, size 0x4, align 4
    char _pad_1AB4[0x4]; // offset 0x1AB4
    CountdownTimer m_RespawnTimer; // offset 0x1AB8, size 0x18, align 8
    int32 m_nLotusesAvailable; // offset 0x1AD0, size 0x4, align 4
    char _pad_1AD4[0x1C]; // offset 0x1AD4
    CountdownTimer m_LotusUpgradeTimer; // offset 0x1AF0, size 0x18, align 8
    int32 m_nLotusIndex; // offset 0x1B08, size 0x4, align 4
    ParticleIndex_t m_nFxProgress; // offset 0x1B0C, size 0x4, align 255
    bool m_bWasInUse; // offset 0x1B10, size 0x1, align 1
    char _pad_1B11[0x3]; // offset 0x1B11
    int32 m_iAssociatedTeam; // offset 0x1B14, size 0x4, align 4
};
