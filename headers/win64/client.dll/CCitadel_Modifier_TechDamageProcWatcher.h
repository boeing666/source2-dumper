#pragma once

class CCitadel_Modifier_TechDamageProcWatcher : public CCitadel_Modifier_BaseEventProc /*0x0*/  // sizeof 0x4E0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x2C8]; // offset 0x0
    GameTime_t m_flNextProcTime; // offset 0x2C8, size 0x4, align 255
    ShotID_t m_shotProced; // offset 0x2CC, size 0x4, align 255
    char _pad_02D0[0x210]; // offset 0x2D0
};
