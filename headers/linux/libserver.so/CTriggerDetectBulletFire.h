#pragma once

class CTriggerDetectBulletFire : public CBaseTrigger /*0x0*/  // sizeof 0xBE0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBC1]; // offset 0x0
    bool m_bPlayerFireOnly; // offset 0xBC1, size 0x1, align 1
    char _pad_0BC2[0x6]; // offset 0xBC2
    CEntityIOOutput m_OnDetectedBulletFire; // offset 0xBC8, size 0x18, align 255
};
