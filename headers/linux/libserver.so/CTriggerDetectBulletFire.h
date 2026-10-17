#pragma once

class CTriggerDetectBulletFire : public CBaseTrigger /*0x0*/  // sizeof 0xCC0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xCA1]; // offset 0x0
    bool m_bPlayerFireOnly; // offset 0xCA1, size 0x1, align 1
    char _pad_0CA2[0x6]; // offset 0xCA2
    CEntityIOOutput m_OnDetectedBulletFire; // offset 0xCA8, size 0x18, align 255
};
