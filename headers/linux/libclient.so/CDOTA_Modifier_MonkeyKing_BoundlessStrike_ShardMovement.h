#pragma once

class CDOTA_Modifier_MonkeyKing_BoundlessStrike_ShardMovement : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 acceleration_z; // offset 0x1A78, size 0x4, align 4
    int32 min_height_above_lowest; // offset 0x1A7C, size 0x4, align 4
    int32 min_height_above_highest; // offset 0x1A80, size 0x4, align 4
    int32 max_horizontal_acceleration; // offset 0x1A84, size 0x4, align 4
    int32 spring_channel_pct; // offset 0x1A88, size 0x4, align 4
    char _pad_1A8C[0x4]; // offset 0x1A8C
};
