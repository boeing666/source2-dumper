#pragma once

struct NeutralCampStackPullAlarm_t  // sizeof 0x1C, align 0xFF [trivial_dtor] (client)
{
    VectorWS m_vPosition; // offset 0x0, size 0xC, align 4
    float32 m_flPullAlarmTime; // offset 0xC, size 0x4, align 4
    float32 m_flStackAlarmTime; // offset 0x10, size 0x4, align 4
    int32 m_nCampIndex; // offset 0x14, size 0x4, align 4
    int32 m_nAlarmTypes; // offset 0x18, size 0x4, align 4
};
