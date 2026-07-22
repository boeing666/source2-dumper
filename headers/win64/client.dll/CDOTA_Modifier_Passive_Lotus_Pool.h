#pragma once

class CDOTA_Modifier_Passive_Lotus_Pool : public CDOTA_Buff /*0x0*/  // sizeof 0x1AF0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 first_lotus_pickup_time; // offset 0x1A58, size 0x4, align 4
    float32 pickup_time_reduction_pct; // offset 0x1A5C, size 0x4, align 4
    float32 min_lotus_pickup_time; // offset 0x1A60, size 0x4, align 4
    float32 think_interval; // offset 0x1A64, size 0x4, align 4
    float32 radius; // offset 0x1A68, size 0x4, align 4
    float32 m_flRemainingPickupTime; // offset 0x1A6C, size 0x4, align 4
    float32 m_flCurrentMaxPickupTime; // offset 0x1A70, size 0x4, align 4
    int32 m_nLotusSeconds; // offset 0x1A74, size 0x4, align 4
    CountdownTimer m_LotusTimer; // offset 0x1A78, size 0x18, align 8
    int32 m_nRespawnSeconds; // offset 0x1A90, size 0x4, align 4
    char _pad_1A94[0x4]; // offset 0x1A94
    CountdownTimer m_RespawnTimer; // offset 0x1A98, size 0x18, align 8
    int32 m_nLotusesAvailable; // offset 0x1AB0, size 0x4, align 4
    char _pad_1AB4[0x1C]; // offset 0x1AB4
    CountdownTimer m_LotusUpgradeTimer; // offset 0x1AD0, size 0x18, align 8
    int32 m_nLotusIndex; // offset 0x1AE8, size 0x4, align 4
    char _pad_1AEC[0x4]; // offset 0x1AEC
};
