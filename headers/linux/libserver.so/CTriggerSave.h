#pragma once

class CTriggerSave : public CBaseTrigger /*0x0*/  // sizeof 0xCB0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xCA1]; // offset 0x0
    bool m_bForceNewLevelUnit; // offset 0xCA1, size 0x1, align 1
    char _pad_0CA2[0x2]; // offset 0xCA2
    float32 m_fDangerousTimer; // offset 0xCA4, size 0x4, align 4
    int32 m_minHitPoints; // offset 0xCA8, size 0x4, align 4
    float32 m_flRetriggerDelay; // offset 0xCAC, size 0x4, align 4
};
