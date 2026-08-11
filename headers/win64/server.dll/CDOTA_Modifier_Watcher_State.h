#pragma once

class CDOTA_Modifier_Watcher_State : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A7C]; // offset 0x0
    int32 m_nOwningTeamNumber; // offset 0x1A7C, size 0x4, align 4
    bool m_bHasSentFirstReady; // offset 0x1A80, size 0x1, align 1
    char _pad_1A81[0x3]; // offset 0x1A81
    GameTime_t m_flNextReadyTime; // offset 0x1A84, size 0x4, align 255
    uint32 m_uFoWVisibilityMask; // offset 0x1A88, size 0x4, align 4
    int32 m_nCapturingUnitCount; // offset 0x1A8C, size 0x4, align 4
};
