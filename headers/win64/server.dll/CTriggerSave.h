#pragma once

class CTriggerSave : public CBaseTrigger /*0x0*/  // sizeof 0xA40, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA30]; // offset 0x0
    bool m_bForceNewLevelUnit; // offset 0xA30, size 0x1, align 1
    char _pad_0A31[0x3]; // offset 0xA31
    float32 m_fDangerousTimer; // offset 0xA34, size 0x4, align 4
    int32 m_minHitPoints; // offset 0xA38, size 0x4, align 4
    float32 m_flRetriggerDelay; // offset 0xA3C, size 0x4, align 4
};
