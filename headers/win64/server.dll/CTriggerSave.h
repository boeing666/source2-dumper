#pragma once

class CTriggerSave : public CBaseTrigger /*0x0*/  // sizeof 0x8F0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8E0]; // offset 0x0
    bool m_bForceNewLevelUnit; // offset 0x8E0, size 0x1, align 1
    char _pad_08E1[0x3]; // offset 0x8E1
    float32 m_fDangerousTimer; // offset 0x8E4, size 0x4, align 4
    int32 m_minHitPoints; // offset 0x8E8, size 0x4, align 4
    char _pad_08EC[0x4]; // offset 0x8EC
};
