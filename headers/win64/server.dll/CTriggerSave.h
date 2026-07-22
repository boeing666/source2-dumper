#pragma once

class CTriggerSave : public CBaseTrigger /*0x0*/  // sizeof 0x8F8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8E8]; // offset 0x0
    bool m_bForceNewLevelUnit; // offset 0x8E8, size 0x1, align 1
    char _pad_08E9[0x3]; // offset 0x8E9
    float32 m_fDangerousTimer; // offset 0x8EC, size 0x4, align 4
    int32 m_minHitPoints; // offset 0x8F0, size 0x4, align 4
    float32 m_flRetriggerDelay; // offset 0x8F4, size 0x4, align 4
};
