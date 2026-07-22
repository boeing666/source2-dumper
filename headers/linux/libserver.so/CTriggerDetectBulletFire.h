#pragma once

class CTriggerDetectBulletFire : public CBaseTrigger /*0x0*/  // sizeof 0xBD8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBB9]; // offset 0x0
    bool m_bPlayerFireOnly; // offset 0xBB9, size 0x1, align 1
    char _pad_0BBA[0x6]; // offset 0xBBA
    CEntityIOOutput m_OnDetectedBulletFire; // offset 0xBC0, size 0x18, align 255
};
