#pragma once

class CTriggerSave : public CBaseTrigger /*0x0*/  // sizeof 0xBC8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBB9]; // offset 0x0
    bool m_bForceNewLevelUnit; // offset 0xBB9, size 0x1, align 1
    char _pad_0BBA[0x2]; // offset 0xBBA
    float32 m_fDangerousTimer; // offset 0xBBC, size 0x4, align 4
    int32 m_minHitPoints; // offset 0xBC0, size 0x4, align 4
    float32 m_flRetriggerDelay; // offset 0xBC4, size 0x4, align 4
};
