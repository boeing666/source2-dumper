#pragma once

class CDOTA_Modifier_Passive_Lotus_Pool : public CDOTA_Buff /*0x0*/  // sizeof 0x1B90, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 first_lotus_pickup_time; // offset 0x1AF8, size 0x4, align 4
    float32 pickup_time_reduction_pct; // offset 0x1AFC, size 0x4, align 4
    float32 min_lotus_pickup_time; // offset 0x1B00, size 0x4, align 4
    float32 think_interval; // offset 0x1B04, size 0x4, align 4
    float32 radius; // offset 0x1B08, size 0x4, align 4
    float32 m_flRemainingPickupTime; // offset 0x1B0C, size 0x4, align 4
    float32 m_flCurrentMaxPickupTime; // offset 0x1B10, size 0x4, align 4
    int32 m_nLotusSeconds; // offset 0x1B14, size 0x4, align 4
    CountdownTimer m_LotusTimer; // offset 0x1B18, size 0x18, align 8
    int32 m_nRespawnSeconds; // offset 0x1B30, size 0x4, align 4
    char _pad_1B34[0x4]; // offset 0x1B34
    CountdownTimer m_RespawnTimer; // offset 0x1B38, size 0x18, align 8
    int32 m_nLotusesAvailable; // offset 0x1B50, size 0x4, align 4
    char _pad_1B54[0x1C]; // offset 0x1B54
    CountdownTimer m_LotusUpgradeTimer; // offset 0x1B70, size 0x18, align 8
    int32 m_nLotusIndex; // offset 0x1B88, size 0x4, align 4
    char _pad_1B8C[0x4]; // offset 0x1B8C
};
