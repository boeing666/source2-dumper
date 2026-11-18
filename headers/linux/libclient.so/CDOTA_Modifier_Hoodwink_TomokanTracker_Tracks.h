#pragma once

class CDOTA_Modifier_Hoodwink_TomokanTracker_Tracks : public CDOTA_Buff /*0x0*/  // sizeof 0x1B38, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 search_radius; // offset 0x1AF8, size 0x4, align 4
    float32 trail_duration; // offset 0x1AFC, size 0x4, align 4
    float32 trail_interval; // offset 0x1B00, size 0x4, align 4
    float32 trail_history_duration; // offset 0x1B04, size 0x4, align 4
    char _pad_1B08[0x30]; // offset 0x1B08
};
