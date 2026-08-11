#pragma once

class CCitadel_Modifier_TechDamageProcWatcher : public CCitadel_Modifier_BaseEventProc /*0x0*/  // sizeof 0x390, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x208]; // offset 0x0
    GameTime_t m_flNextProcTime; // offset 0x208, size 0x4, align 255
    ShotID_t m_shotProced; // offset 0x20C, size 0x4, align 255
    char _pad_0210[0x180]; // offset 0x210
};
