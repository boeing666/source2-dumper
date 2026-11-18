#pragma once

class CTriggerDetectBulletFire : public CBaseTrigger /*0x0*/  // sizeof 0xA50, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA30]; // offset 0x0
    bool m_bPlayerFireOnly; // offset 0xA30, size 0x1, align 1
    char _pad_0A31[0x7]; // offset 0xA31
    CEntityIOOutput m_OnDetectedBulletFire; // offset 0xA38, size 0x18, align 255
};
