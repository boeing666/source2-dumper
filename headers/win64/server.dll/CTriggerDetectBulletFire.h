#pragma once

class CTriggerDetectBulletFire : public CBaseTrigger /*0x0*/  // sizeof 0x908, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8E8]; // offset 0x0
    bool m_bPlayerFireOnly; // offset 0x8E8, size 0x1, align 1
    char _pad_08E9[0x7]; // offset 0x8E9
    CEntityIOOutput m_OnDetectedBulletFire; // offset 0x8F0, size 0x18, align 255
};
