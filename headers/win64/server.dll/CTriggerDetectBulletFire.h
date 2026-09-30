#pragma once

class CTriggerDetectBulletFire : public CBaseTrigger /*0x0*/  // sizeof 0xA10, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x9F0]; // offset 0x0
    bool m_bPlayerFireOnly; // offset 0x9F0, size 0x1, align 1
    char _pad_09F1[0x7]; // offset 0x9F1
    CEntityIOOutput m_OnDetectedBulletFire; // offset 0x9F8, size 0x18, align 255
};
