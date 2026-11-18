#pragma once

class CDOTA_Modifier_Watcher_State : public CDOTA_Buff /*0x0*/  // sizeof 0x1B10, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AFC]; // offset 0x0
    int32 m_nOwningTeamNumber; // offset 0x1AFC, size 0x4, align 4
    bool m_bHasSentFirstReady; // offset 0x1B00, size 0x1, align 1
    char _pad_1B01[0x3]; // offset 0x1B01
    GameTime_t m_flNextReadyTime; // offset 0x1B04, size 0x4, align 255
    uint32 m_uFoWVisibilityMask; // offset 0x1B08, size 0x4, align 4
    int32 m_nCapturingUnitCount; // offset 0x1B0C, size 0x4, align 4
};
