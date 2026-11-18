#pragma once

class CDOTA_Modifier_Pudge_Swallow_Hide : public CDOTA_Buff /*0x0*/  // sizeof 0x1B08, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 order_lock_duration; // offset 0x1AF8, size 0x4, align 4
    GameTime_t m_fOrderLockDone; // offset 0x1AFC, size 0x4, align 255
    int32 m_nFXIndex; // offset 0x1B00, size 0x4, align 4
    float32 shard_regen_pct; // offset 0x1B04, size 0x4, align 4
};
