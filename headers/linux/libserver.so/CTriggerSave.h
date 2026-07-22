#pragma once

class CTriggerSave : public CBaseTrigger /*0x0*/  // sizeof 0xBD0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBC1]; // offset 0x0
    bool m_bForceNewLevelUnit; // offset 0xBC1, size 0x1, align 1
    char _pad_0BC2[0x2]; // offset 0xBC2
    float32 m_fDangerousTimer; // offset 0xBC4, size 0x4, align 4
    int32 m_minHitPoints; // offset 0xBC8, size 0x4, align 4
    float32 m_flRetriggerDelay; // offset 0xBCC, size 0x4, align 4
};
