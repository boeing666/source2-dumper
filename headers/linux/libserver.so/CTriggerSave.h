#pragma once

class CTriggerSave : public CBaseTrigger /*0x0*/  // sizeof 0xCA8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xC99]; // offset 0x0
    bool m_bForceNewLevelUnit; // offset 0xC99, size 0x1, align 1
    char _pad_0C9A[0x2]; // offset 0xC9A
    float32 m_fDangerousTimer; // offset 0xC9C, size 0x4, align 4
    int32 m_minHitPoints; // offset 0xCA0, size 0x4, align 4
    float32 m_flRetriggerDelay; // offset 0xCA4, size 0x4, align 4
};
