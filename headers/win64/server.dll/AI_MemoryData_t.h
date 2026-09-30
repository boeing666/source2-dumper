#pragma once

struct AI_MemoryData_t  // sizeof 0x10, align 0x4 [trivial_dtor] (server) {MGetKV3ClassDefaults}
{
    GameTime_t m_flSightingStartTime; // offset 0x0, size 0x4, align 255
    GameTime_t m_flSightingEndTime; // offset 0x4, size 0x4, align 255
    GameTime_t m_flSightingReacquisitionStartTime; // offset 0x8, size 0x4, align 255
    GameTime_t m_flTimeLastReceivedDamageFrom; // offset 0xC, size 0x4, align 255
};
