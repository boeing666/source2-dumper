#pragma once

class CCitadel_Modifier_TechDamageProcWatcher : public CCitadel_Modifier_BaseEventProc /*0x0*/  // sizeof 0x380, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1F8]; // offset 0x0
    GameTime_t m_flNextProcTime; // offset 0x1F8, size 0x4, align 255
    ShotID_t m_shotProced; // offset 0x1FC, size 0x4, align 255
    char _pad_0200[0x180]; // offset 0x200
};
